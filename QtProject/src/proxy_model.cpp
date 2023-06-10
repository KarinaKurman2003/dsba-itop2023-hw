#include "proxy_model.h"

ProxyModel::ProxyModel(QObject* parent)
    : QSortFilterProxyModel(parent)
{};


QVariant ProxyModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    return sourceModel()->headerData(section, orientation, role);
}


bool ProxyModel::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const
{
    return true;
}
