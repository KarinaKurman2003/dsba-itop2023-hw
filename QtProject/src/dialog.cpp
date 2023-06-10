#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QList<QPair<QString, size_t>> Dialog::addRestaraunts(size_t size)
{
    QList<QPair<QString, size_t>> newEntry;
    int count = -1;

    QString Name = ui->lineEditName->text();
    newEntry.append(QPair(Name, 1));

    QString Location = ui->lineEditLocation->text();;
    if (Location.indexOf(",") == -1)
    {
        count = 1;
    }
    else
    {
        count = 2;
    }
    newEntry.append(QPair(Location, count));

    QString Locality = ui->lineEditLocality->text();
    newEntry.append(QPair(Locality, 1));

    QString City = ui->lineEditCity->text();
    newEntry.append(QPair(City, 1));

    QString Cuisine  = ui->lineEditCuisine->text();
    if (Cuisine.indexOf(",") == -1)
    {
        count = 1;
    }
    else
    {
        count = 2;
    }
    newEntry.append(QPair(Cuisine, count));

    QString Rating = ui->lineEditRating->text();
    newEntry.append(QPair(Rating, 1));

    QString Votes = ui->lineEditVotes->text();
    newEntry.append(QPair(Votes, 1));

    QString Cost = ui->lineEditCost->text();
    newEntry.append(QPair(Cost, 1));

    return newEntry;
}
