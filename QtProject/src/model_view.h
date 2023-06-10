#ifndef MODEL_VIEW_HPP
#define MODEL_VIEW_HPP

#include <QAbstractTableModel>
#include <QDebug>

class TableModel : public QAbstractTableModel
{
    Q_OBJECT
public:
    explicit TableModel(QObject *parent = nullptr);
    ~TableModel();

    int      rowCount(const QModelIndex &parent = QModelIndex())            const override;
    int      columnCount(const QModelIndex &parent = QModelIndex())         const override;
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole)     const override;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const override;

    QList<QList<QPair<QString, size_t>>> getDataTable()     const;
    QList<QPair<QString, size_t>>        getRow(size_t idx) const;

    void   appendRow(const QList<QPair<QString, size_t>>& data);

    void   deleteRow(size_t idx);
    void   readFromFile(const QString& path);
    void   saveToFile(const QString& path);
    void   setCurrentRow(size_t idx);
    size_t getCurrentRow() const;
    size_t getRowCount() const;

    QList<QList<QPair<QString, size_t>>> searchString(const QString& header, const QString& query) const;
    QList<QList<QPair<QString, size_t>>> searchRating(float min, float max) const;
    QList<QList<QPair<QString, size_t>>> searchCost(int min, int max) const;

private:
    QList<QList<QPair<QString, size_t>>> dataTable;
    QList<QString>                       header;
    size_t                               cur_index;
};

#endif // MODEL_VIEW_HPP
