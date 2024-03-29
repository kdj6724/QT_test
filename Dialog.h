#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QListWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemActivated(QListWidgetItem *item);

private:
    Ui::Dialog *ui;
    QListWidgetItem* menuList_[5];
};
#endif // DIALOG_H
