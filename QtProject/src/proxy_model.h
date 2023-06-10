#ifndef PROXYMODEL_H
#define PROXYMODEL_H

#include <QSortFilterProxyModel>

class ProxyModel : public QSortFilterProxyModel
{
    Q_OBJECT
public:
    ProxyModel(QObject* parent = 0);
    QVariant headerData      (int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const;
    bool     filterAcceptsRow(int source_row, const QModelIndex &source_parent)                     const;

    QList<QPair<QString, size_t>> getRow(size_t idx) const;
};

#endif // PROXYMODEL_H

