/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_name;
    QLineEdit *lineEditName;
    QLabel *label_location;
    QLineEdit *lineEditLocation;
    QLabel *label_locality;
    QLineEdit *lineEditLocality;
    QLabel *label_city;
    QLineEdit *lineEditCity;
    QLabel *label_cuisine;
    QLineEdit *lineEditCuisine;
    QLabel *label_rating;
    QLineEdit *lineEditRating;
    QLabel *label_votes;
    QLineEdit *lineEditVotes;
    QLabel *label_cost;
    QLineEdit *lineEditCost;
    QLabel *labe_info;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(508, 328);
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_name = new QLabel(Dialog);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        lineEditName = new QLineEdit(Dialog);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditName);

        label_location = new QLabel(Dialog);
        label_location->setObjectName(QString::fromUtf8("label_location"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_location);

        lineEditLocation = new QLineEdit(Dialog);
        lineEditLocation->setObjectName(QString::fromUtf8("lineEditLocation"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditLocation);

        label_locality = new QLabel(Dialog);
        label_locality->setObjectName(QString::fromUtf8("label_locality"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_locality);

        lineEditLocality = new QLineEdit(Dialog);
        lineEditLocality->setObjectName(QString::fromUtf8("lineEditLocality"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditLocality);

        label_city = new QLabel(Dialog);
        label_city->setObjectName(QString::fromUtf8("label_city"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_city);

        lineEditCity = new QLineEdit(Dialog);
        lineEditCity->setObjectName(QString::fromUtf8("lineEditCity"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditCity);

        label_cuisine = new QLabel(Dialog);
        label_cuisine->setObjectName(QString::fromUtf8("label_cuisine"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_cuisine);

        lineEditCuisine = new QLineEdit(Dialog);
        lineEditCuisine->setObjectName(QString::fromUtf8("lineEditCuisine"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditCuisine);

        label_rating = new QLabel(Dialog);
        label_rating->setObjectName(QString::fromUtf8("label_rating"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_rating);

        lineEditRating = new QLineEdit(Dialog);
        lineEditRating->setObjectName(QString::fromUtf8("lineEditRating"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditRating);

        label_votes = new QLabel(Dialog);
        label_votes->setObjectName(QString::fromUtf8("label_votes"));
        QFont font;
        font.setPointSize(9);
        label_votes->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_votes);

        lineEditVotes = new QLineEdit(Dialog);
        lineEditVotes->setObjectName(QString::fromUtf8("lineEditVotes"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditVotes);

        label_cost = new QLabel(Dialog);
        label_cost->setObjectName(QString::fromUtf8("label_cost"));
        label_cost->setFont(font);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_cost);

        lineEditCost = new QLineEdit(Dialog);
        lineEditCost->setObjectName(QString::fromUtf8("lineEditCost"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditCost);

        labe_info = new QLabel(Dialog);
        labe_info->setObjectName(QString::fromUtf8("labe_info"));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(true);
        labe_info->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, labe_info);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_name->setText(QCoreApplication::translate("Dialog", "Name:     ", nullptr));
        label_location->setText(QCoreApplication::translate("Dialog", "Location:", nullptr));
        label_locality->setText(QCoreApplication::translate("Dialog", "Locality:  ", nullptr));
        label_city->setText(QCoreApplication::translate("Dialog", "City:         ", nullptr));
        label_cuisine->setText(QCoreApplication::translate("Dialog", "Cuisine:   ", nullptr));
        label_rating->setText(QCoreApplication::translate("Dialog", "Rating:    ", nullptr));
        label_votes->setText(QCoreApplication::translate("Dialog", "Votes:      ", nullptr));
        label_cost->setText(QCoreApplication::translate("Dialog", "Cost:        ", nullptr));
        labe_info->setText(QCoreApplication::translate("Dialog", "Enter data:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
