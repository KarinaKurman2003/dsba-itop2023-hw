#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QMenuBar>
#include <QMenu>
#include <QDebug>

#include "model_view.h"
#include "proxy_model.h"

#include "dialog.h"
#include "searchdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setModelToTableView();
    void addMenuBar();

signals:
    void signalFromFileMenuOpenAction();

    void signalFromFileMenuSaveAction();
    void signalFromFileMenuExitAction();

    void signalFromEditMenuAddAction();
    void signalFromEditMenuEditAction();
    void signalFromEditMenuRemoveAction();

    void signalFromHelpMenuAboutAction();

private slots:

    void slotFileMenuOpenAction();
    void slotFileMenuSaveAction();
    void slotFileMenuExitAction();

    void slotEditMenuAddAction();
    void slotEditMenuEditAction();
    void slotEditMenuRemoveAction();

    void slotHelpMenuAboutAction();

    void on_tableView_clicked(const QModelIndex& index);
    void on_tableView_doubleClicked(const QModelIndex &index);
    void on_pbDelete_clicked();
    void on_pbEdit_clicked();
    void on_pbSearch_clicked();
    void on_pbSaveToFile_clicked();
    void on_pbAdd_clicked();

private:
    Ui::MainWindow* ui;
    TableModel*     tableModel;
    ProxyModel*     proxyModel;
};
#endif // MAINWINDOW_H
