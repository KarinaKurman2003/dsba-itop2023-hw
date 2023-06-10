#include "searchdialog.h"
#include "ui_searchdialog.h"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
}


SearchDialog::SearchDialog(const QList<QList<QPair<QString, size_t>>>& data)
    : QDialog(nullptr)
    , ui(new Ui::SearchDialog)
    , data(data)
{
    ui->setupUi(this);
    this->display();
}

SearchDialog::~SearchDialog()
{
    delete ui;
}


void SearchDialog::display() const
{
    QString text;
    for(size_t i = 0; i < data.size(); ++i)
    {
        QList<QPair<QString, size_t>> row = this->data.at(i);
        text += ("[" + QString::number(i) + "] ===========================\n");
        text += ("Name:\n\t"      + row.at(0).first   + "\n");
        text += ("Location:\n\t"  + row.at(1).first   + "\n");
        text += ("Locality:\n\t"  + row.at(2).first   + "\n");
        text += ("City:\n\t"      + row.at(3).first   + "\n");
        text += ("Cuisine:\n\t"   + row.at(4).first   + "\n");
        text += ("Rating:\n\t"    + row.at(5).first   + "\n");
        text += ("Votes:\n\t"     + row.at(6).first   + "\n");
        text += ("Cost:\n\t"      + row.at(7).first   + "\n\n");
    }
    this->ui->textEdit->setText(text);
}
