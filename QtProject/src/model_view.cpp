#include <QFile>

#include "model_view.h"


TableModel::TableModel(QObject *parent)
    : QAbstractTableModel(parent)
{
    QString path = "/Users/kurmankarina/CLionProjects/lasttestforpr/data/restaraunts.csv";
    this->readFromFile(path);
}

TableModel::~TableModel()
{
    QString path = "/Users/kurmankarina/CLionProjects/lasttestforpr/data/restaraunts_output.csv";
    this->saveToFile(path);
}

int TableModel::rowCount(const QModelIndex& parent) const
{
    if (parent.isValid())
    {
        return 0;
    }
    return dataTable.size();
}

int TableModel::columnCount(const QModelIndex& parent) const
{
    if (parent.isValid())
    {
        return 0;
    }
    return header.size();
}

QVariant TableModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
    {
        return QVariant();
    }

    if (role == Qt::DisplayRole || role == Qt::EditRole)
    {
        try
        {
            return QVariant(dataTable[index.row()][index.column()].first);
        }
        catch (...)
        {
            return QVariant();
        }
    }
    return QVariant();
}

QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole&&orientation == Qt::Horizontal)
    {
        return header[section];
    }
    return QVariant();
}

QList<QPair<QString, size_t>> TableModel::getRow(size_t idx) const
{
    return dataTable.at(idx);
}


void TableModel::deleteRow(size_t idx)
{
    this->dataTable.removeAt(idx);
}

void TableModel::setCurrentRow(size_t idx)
{
    this->cur_index = idx;
}

size_t TableModel::getCurrentRow() const
{
    return this->cur_index;
}

size_t TableModel::getRowCount() const
{
    return this->dataTable.at(0).size();
}


void TableModel::readFromFile(const QString& path)
{
    QFile inputFile(path);
    inputFile.open(QFile::ReadOnly | QFile::Text);

    QTextStream inputStream(&inputFile);

    header = inputStream.readLine().split(',');

    while(!inputStream.atEnd())
    {
        QString line = inputStream.readLine();

        QList<QPair<QString, size_t>> dataRow;
        QString rawMultiItem;
        bool    isMulti = false;
        size_t  count   = 0;

        for (QString& item : line.split(","))
        {
            if (item.front() == tr("\""))
            {
                isMulti = true;
            }

            if (isMulti && item.back() != tr("\""))
            {
                rawMultiItem += item;
                rawMultiItem += ", ";
                count++;
            }

            if (!isMulti)
            {
                dataRow.append(QPair(item, 1));
            }

            if (item.back() == tr("\""))
            {
                rawMultiItem += item;
                count++;
                QString multiItem = rawMultiItem.replace("\"", "");
                dataRow.append(QPair(multiItem, count));

                rawMultiItem.clear();
                isMulti = false;
                count   = 0;
            }
        }
        dataTable.append(dataRow);
    }
    inputFile.close();
}

void TableModel::saveToFile(const QString& path)
{
    QFile outputFile(path);
    outputFile.open(QFile::WriteOnly | QFile::Text);

    QTextStream outputStream(&outputFile);

    for (int i = 0; i < header.size(); i++)
    {
        outputStream << header[i] << ((i < header.size() - 1) ? ',' : '\n');
    }

    for (int i = 0; i < dataTable.size(); i++)
    {
        for (int j = 0; j < dataTable[i].size(); j++)
        {
            if (dataTable[i][j].second > 1)
            {
                outputStream << "\"" << dataTable[i][j].first << "\"" << ((j < dataTable[i].size() - 1) ? ',' : '\n');
            }
            else
            {
                outputStream << dataTable[i][j].first << ((j < dataTable[i].size() - 1) ? ',' : '\n');
            }
        }
    }
    outputFile.close();
}


void TableModel::appendRow(const QList<QPair<QString, size_t>>& data)
{
    beginInsertRows(QModelIndex(), dataTable.size(), dataTable.size() + 1);
    dataTable.append(data);
    endInsertRows();
}


QList<QList<QPair<QString, size_t>>> TableModel::searchString(const QString& header, const QString& query) const
{
    QList<QList<QPair<QString, size_t>>> result;
    size_t idx = -1;

    for (size_t i = 0; i < header.size(); i++)
    {
        if (this->header[i] == header) // this
        {
            idx = i;
        }
    }

    if (idx != -1)
    {
        for (size_t i = 0; i < dataTable.size(); ++i)
        {
            QString row = dataTable[i][idx].first;

            for (QString& item : row.split(","))
            {
                if (item == query)
                {
                    result.append(dataTable[i]);
                }
            }
        }
    }
    return result;
}

QList<QList<QPair<QString, size_t>>> TableModel::searchRating(float min, float max) const
{
    QList<QList<QPair<QString, size_t>>> result;

    for (size_t i = 0; i < dataTable.size(); ++i)
    {
        QString row = dataTable[i][5].first;

        if (row.toFloat() >= min && row.toFloat() <= max)
        {
            result.append(dataTable[i]);
        }
    }
    return result;
}

QList<QList<QPair<QString, size_t>>> TableModel::searchCost(int min, int max) const
{
    QList<QList<QPair<QString, size_t>>> result;
    size_t idx = -1;

    for (size_t i = 0; i < dataTable.size(); ++i)
    {
        QString row = dataTable[i][7].first;

        if (row.toInt() >= min && row.toInt() <= max)
        {
            result.append(dataTable[i]);
        }
    }

    return result;
}
