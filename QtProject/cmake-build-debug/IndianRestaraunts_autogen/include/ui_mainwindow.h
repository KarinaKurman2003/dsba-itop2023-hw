/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionInfo;
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QSplitter *splitter_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QSplitter *splitter;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbAdd;
    QPushButton *pbEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbDelete;
    QSplitter *splitter_2;
    QWidget *widget2;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_4;
    QFormLayout *formLayout;
    QLabel *labe_info;
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
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbSaveToFile;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBoxName;
    QCheckBox *checkBoxCuisine;
    QCheckBox *checkBoxCity;
    QCheckBox *checkBoxCost;
    QCheckBox *checkBoxRating;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEditSearch;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbSearch;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(954, 629);
        MainWindow->setDocumentMode(false);
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        splitter_3 = new QSplitter(centralwidget);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(widget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEnabled(true);

        verticalLayout->addWidget(tableView);

        splitter = new QSplitter(widget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbAdd = new QPushButton(widget1);
        pbAdd->setObjectName(QString::fromUtf8("pbAdd"));

        horizontalLayout->addWidget(pbAdd);

        pbEdit = new QPushButton(widget1);
        pbEdit->setObjectName(QString::fromUtf8("pbEdit"));

        horizontalLayout->addWidget(pbEdit);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 1);

        pbDelete = new QPushButton(widget1);
        pbDelete->setObjectName(QString::fromUtf8("pbDelete"));

        gridLayout->addWidget(pbDelete, 1, 2, 1, 1);

        splitter->addWidget(widget1);

        verticalLayout->addWidget(splitter);

        splitter_3->addWidget(widget);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        widget2 = new QWidget(splitter_2);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        gridLayout_5 = new QGridLayout(widget2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(130, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labe_info = new QLabel(widget2);
        labe_info->setObjectName(QString::fromUtf8("labe_info"));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        labe_info->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, labe_info);

        label_name = new QLabel(widget2);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        lineEditName = new QLineEdit(widget2);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditName);

        label_location = new QLabel(widget2);
        label_location->setObjectName(QString::fromUtf8("label_location"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_location);

        lineEditLocation = new QLineEdit(widget2);
        lineEditLocation->setObjectName(QString::fromUtf8("lineEditLocation"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditLocation);

        label_locality = new QLabel(widget2);
        label_locality->setObjectName(QString::fromUtf8("label_locality"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_locality);

        lineEditLocality = new QLineEdit(widget2);
        lineEditLocality->setObjectName(QString::fromUtf8("lineEditLocality"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditLocality);

        label_city = new QLabel(widget2);
        label_city->setObjectName(QString::fromUtf8("label_city"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_city);

        lineEditCity = new QLineEdit(widget2);
        lineEditCity->setObjectName(QString::fromUtf8("lineEditCity"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditCity);

        label_cuisine = new QLabel(widget2);
        label_cuisine->setObjectName(QString::fromUtf8("label_cuisine"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_cuisine);

        lineEditCuisine = new QLineEdit(widget2);
        lineEditCuisine->setObjectName(QString::fromUtf8("lineEditCuisine"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditCuisine);

        label_rating = new QLabel(widget2);
        label_rating->setObjectName(QString::fromUtf8("label_rating"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_rating);

        lineEditRating = new QLineEdit(widget2);
        lineEditRating->setObjectName(QString::fromUtf8("lineEditRating"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditRating);

        label_votes = new QLabel(widget2);
        label_votes->setObjectName(QString::fromUtf8("label_votes"));
        QFont font1;
        font1.setPointSize(9);
        label_votes->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_votes);

        lineEditVotes = new QLineEdit(widget2);
        lineEditVotes->setObjectName(QString::fromUtf8("lineEditVotes"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditVotes);

        label_cost = new QLabel(widget2);
        label_cost->setObjectName(QString::fromUtf8("label_cost"));
        label_cost->setFont(font1);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_cost);

        lineEditCost = new QLineEdit(widget2);
        lineEditCost->setObjectName(QString::fromUtf8("lineEditCost"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditCost);


        gridLayout_4->addLayout(formLayout, 0, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        pbSaveToFile = new QPushButton(widget2);
        pbSaveToFile->setObjectName(QString::fromUtf8("pbSaveToFile"));

        gridLayout_4->addWidget(pbSaveToFile, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBoxName = new QCheckBox(widget2);
        checkBoxName->setObjectName(QString::fromUtf8("checkBoxName"));

        verticalLayout_2->addWidget(checkBoxName);

        checkBoxCuisine = new QCheckBox(widget2);
        checkBoxCuisine->setObjectName(QString::fromUtf8("checkBoxCuisine"));

        verticalLayout_2->addWidget(checkBoxCuisine);

        checkBoxCity = new QCheckBox(widget2);
        checkBoxCity->setObjectName(QString::fromUtf8("checkBoxCity"));

        verticalLayout_2->addWidget(checkBoxCity);

        checkBoxCost = new QCheckBox(widget2);
        checkBoxCost->setObjectName(QString::fromUtf8("checkBoxCost"));

        verticalLayout_2->addWidget(checkBoxCost);

        checkBoxRating = new QCheckBox(widget2);
        checkBoxRating->setObjectName(QString::fromUtf8("checkBoxRating"));

        verticalLayout_2->addWidget(checkBoxRating);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEditSearch = new QLineEdit(widget2);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        gridLayout_2->addWidget(lineEditSearch, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        pbSearch = new QPushButton(widget2);
        pbSearch->setObjectName(QString::fromUtf8("pbSearch"));

        gridLayout_2->addWidget(pbSearch, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 2, 0, 1, 1);

        splitter_2->addWidget(widget2);
        splitter_3->addWidget(splitter_2);

        gridLayout_6->addWidget(splitter_3, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 954, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        pbAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pbEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        pbDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        labe_info->setText(QCoreApplication::translate("MainWindow", "Info:", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "Name:     ", nullptr));
        label_location->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        label_locality->setText(QCoreApplication::translate("MainWindow", "Locality:  ", nullptr));
        label_city->setText(QCoreApplication::translate("MainWindow", "City:         ", nullptr));
        label_cuisine->setText(QCoreApplication::translate("MainWindow", "Cuisine:   ", nullptr));
        label_rating->setText(QCoreApplication::translate("MainWindow", "Rating:    ", nullptr));
        label_votes->setText(QCoreApplication::translate("MainWindow", "Votes:      ", nullptr));
        label_cost->setText(QCoreApplication::translate("MainWindow", "Cost:        ", nullptr));
        pbSaveToFile->setText(QCoreApplication::translate("MainWindow", "Save to File", nullptr));
        checkBoxName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        checkBoxCuisine->setText(QCoreApplication::translate("MainWindow", "Cuisine", nullptr));
        checkBoxCity->setText(QCoreApplication::translate("MainWindow", "City", nullptr));
        checkBoxCost->setText(QCoreApplication::translate("MainWindow", "Cost", nullptr));
        checkBoxRating->setText(QCoreApplication::translate("MainWindow", "Rating", nullptr));
        pbSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
