#include <QFileDialog>
#include <QMessageBox>

#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , tableModel(new TableModel)
    , proxyModel(new ProxyModel)
{
    ui->setupUi(this);

    this->addMenuBar();
    this->setModelToTableView();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete tableModel;
    delete proxyModel;
}

void MainWindow::setModelToTableView()
{
    proxyModel->setSourceModel(tableModel);
    ui->tableView->setModel(proxyModel);
    ui->tableView->setSortingEnabled(true);
}

void MainWindow::addMenuBar()
{
    QMenu* fileMenu = ui->menubar->addMenu("&File");
    fileMenu->addAction("&Open CSV", this, SLOT(slotFileMenuOpenAction()));
    fileMenu->addAction("&Save As...", this, SLOT(slotFileMenuSaveAction()));
    fileMenu->addAction("&Exit", this, SLOT(slotFileMenuExitAction()));

    QMenu* editMenu = ui->menubar->addMenu("&Edit");
    editMenu->addAction("&Add",    this, SLOT(slotEditMenuAddAction()));
    editMenu->addAction("&Edit",   this, SLOT(slotEditMenuEditAction()));
    editMenu->addAction("&Remove", this, SLOT(slotEditMenuRemoveAction()));

    QMenu* helpMenu = ui->menubar->addMenu("&Help");
    helpMenu->addAction("&About", this, SLOT(slotHelpMenuAboutAction()));
}

void MainWindow::slotFileMenuOpenAction()
{
    QString fileName = QFileDialog::getOpenFileName (NULL, "CSV with database", ".", "*.csv");
    if (fileName.size() != 0)
    {
        this->tableModel->readFromFile(fileName);
    }
}

void MainWindow::slotFileMenuSaveAction()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", ".", "*.csv");
    this->tableModel->saveToFile(fileName);
}

void MainWindow::slotFileMenuExitAction()
{
    QApplication::quit();
}


void MainWindow::slotEditMenuAddAction()
{
    Dialog dialog;

    if (dialog.exec())
    {
        QList<QPair<QString, size_t>> newEntry = dialog.addRestaraunts(this->tableModel->getRowCount());

        bool wrongData = false;

        for (const auto& pair : newEntry)
        {
            bool wrongData = pair.first.size() == 0 ? true : false;

            if (wrongData)
            {
                return;
            }
        }
        this->tableModel->appendRow(newEntry);
    }
}

void MainWindow::slotEditMenuEditAction()
{
    Dialog dialog;

    if (dialog.exec())
    {
        QList<QPair<QString, size_t>> newEntry = dialog.addRestaraunts(this->tableModel->getRowCount());

        bool wrongData = false;

        for (const auto& pair : newEntry)
        {
            bool wrongData = pair.first.size() == 0 ? true : false;

            if (wrongData)
            {
                return;
            }
        }

        ui->lineEditName    ->setText(newEntry[0].first);
        ui->lineEditLocation->setText(newEntry[1].first);
        ui->lineEditLocality->setText(newEntry[2].first);
        ui->lineEditCity    ->setText(newEntry[3].first);
        ui->lineEditCuisine ->setText(newEntry[4].first);
        ui->lineEditRating  ->setText(newEntry[5].first);
        ui->lineEditVotes   ->setText(newEntry[6].first);
        ui->lineEditCost    ->setText(newEntry[7].first);

    }
}

void MainWindow::slotEditMenuRemoveAction()
{
    size_t row = tableModel->getCurrentRow();
    tableModel->deleteRow(row);
}


void MainWindow::slotHelpMenuAboutAction()
{
    QDialog dialog;
    dialog.setFixedSize(444, 480);
    dialog.setStyleSheet("background-image:url(../IndianRestaraunts/data/about.jpg);");

    dialog.show();
    if (dialog.exec()) {}
}

void MainWindow::on_tableView_clicked(const QModelIndex& index)
{
    int row = proxyModel->mapToSource(index).row();
    this->tableModel->setCurrentRow(row);

    size_t r = ui->tableView->selectionModel()->currentIndex().row();

    ui->lineEditName->setText(proxyModel->index(r, 0).data().toString());
    ui->lineEditLocation->setText(proxyModel->index(r, 1).data().toString());

    ui->lineEditLocality->setText(proxyModel->index(r, 2).data().toString());
    ui->lineEditRating->setText(proxyModel->index(r, 5).data().toString());

    ui->lineEditCity->setText(proxyModel->index(r, 3).data().toString());
    ui->lineEditCuisine->setText(proxyModel->index(r, 4).data().toString());

    ui->lineEditVotes->setText(proxyModel->index(r, 6).data().toString());
    ui->lineEditCost->setText(proxyModel->index(r, 7).data().toString());
}


void MainWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    int row = proxyModel->mapToSource(index).row();
    this->tableModel->setCurrentRow(row);
}


void MainWindow::on_pbDelete_clicked()
{
    size_t row = tableModel->getCurrentRow();
    tableModel->deleteRow(row);
}

void MainWindow::on_pbAdd_clicked()
{
    Dialog dialog;

    if (dialog.exec())
    {
        QList<QPair<QString, size_t>> newEntry = dialog.addRestaraunts(this->tableModel->getRowCount());

        bool wrongData = false;

        for (const auto& pair : newEntry)
        {
            bool wrongData = pair.first.size() == 0 ? true : false;

            if (wrongData)
            {
                return;
            }
        }
        this->tableModel->appendRow(newEntry);
    }
}

void MainWindow::on_pbEdit_clicked()
{
    Dialog dialog;

    if (dialog.exec())
    {
        QList<QPair<QString, size_t>> newEntry = dialog.addRestaraunts(this->tableModel->getRowCount());

        bool wrongData = false;

        for (const auto& pair : newEntry)
        {
            bool wrongData = pair.first.size() == 0 ? true : false;

            if (wrongData)
            {
                return;
            }
        }





        ui->lineEditName    ->setText(newEntry[0].first);
        ui->lineEditLocation->setText(newEntry[1].first);
        ui->lineEditLocality->setText(newEntry[2].first);
        ui->lineEditCity    ->setText(newEntry[3].first);
        ui->lineEditCuisine ->setText(newEntry[4].first);
        ui->lineEditRating  ->setText(newEntry[5].first);
        ui->lineEditVotes   ->setText(newEntry[6].first);
        ui->lineEditCost    ->setText(newEntry[7].first);
    }
}


void MainWindow::on_pbSearch_clicked()
{
    bool nameSelected    = ui->checkBoxName->isChecked();
    bool cuisineSelected = ui->checkBoxCuisine->isChecked();
    bool citySelected    = ui->checkBoxCity->isChecked();
    bool costSelected    = ui->checkBoxCost->isChecked();
    bool ratingSelected  = ui->checkBoxRating->isChecked();

    size_t countSelect = 0;
    countSelect += nameSelected ? 1 : 0;
    countSelect += cuisineSelected ? 1 : 0;
    countSelect += citySelected ? 1 : 0;
    countSelect += costSelected ? 1 : 0;
    countSelect += ratingSelected ? 1 : 0;

    if (countSelect > 1)
    {
        QMessageBox messageBox;
        messageBox.critical(0,"Error","The search is carried out by one parameter!");
        messageBox.setFixedSize(500,200);
    }
    else
    {
        QString query = ui->lineEditSearch->text();

        if (query.size() == 0)
        {
            return;
        }
        QList<QList<QPair<QString, size_t>>> result;

        if (nameSelected)
        {
            QString header = "Name";
            result = this->tableModel->searchString(header, query);
        }
        if (cuisineSelected)
        {
            QString header = "Cuisine";
            result = this->tableModel->searchString(header, query);
        }
        if (citySelected)
        {
            QString header = "City";
            result = this->tableModel->searchString(header, query);
        }
        if (costSelected)
        {
            int min = 0;
            int max = 0;

            for (QString& item : query.split(" "))
            {
                if (min == 0)
                {
                    min = item.toInt();
                    continue;
                }
                max = item.toInt();
            }
            result = this->tableModel->searchCost(min, max);
        }
        if (ratingSelected)
        {
            float min = 0.0;
            float max = 0.0;

            for (QString& item : query.split(" "))
            {
                if (min == 0)
                {
                    min = item.toFloat();
                    continue;
                }
                max = item.toFloat();
            }
            result = this->tableModel->searchRating(min, max);
        }
        SearchDialog dialog(result);
        if (dialog.exec())
        {
        }
    }
}


void MainWindow::on_pbSaveToFile_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save File", ".", "*.txt");
    QFile outputFile(fileName);
    outputFile.open(QFile::WriteOnly | QFile::Text);

    QTextStream outputStream(&outputFile);

    outputStream << "Name:\n\t"     <<  ui->lineEditName->text()    << "\n";
    outputStream << "Location:\n\t" << ui->lineEditLocation->text() << "\n";
    outputStream << "Locality:\n\t" << ui->lineEditLocality->text() << "\n";
    outputStream << "City:\n\t"     << ui->lineEditCity->text()     << "\n";
    outputStream << "Cuisine:\n\t"  << ui->lineEditCuisine->text()  << "\n";
    outputStream << "Rating:\n\t"   << ui->lineEditRating->text()   << "\n";
    outputStream << "Votes:\n\t"    << ui->lineEditVotes->text()    << "\n";
    outputStream << "Cost:\n\t"     << ui->lineEditCost->text()     << "\n";

    outputFile.close();
}




