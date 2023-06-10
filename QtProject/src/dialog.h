#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    QList<QPair<QString, size_t>> addRestaraunts(size_t size);

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
