#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = nullptr);

    SearchDialog(const QList<QList<QPair<QString, size_t>>>& data);

    ~SearchDialog();

    void display() const;


private:
    Ui::SearchDialog *ui;
    QList<QList<QPair<QString, size_t>>> data;
};

#endif // SEARCHDIALOG_H
