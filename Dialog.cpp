#include "Dialog.h"
#include "ui_Dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    for (auto obj : menuList_) {
        obj = new QListWidgetItem("menu menu menu");
        ui->listWidget->addItem(obj);
    }
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    qDebug() << "on_pushButton_clicked";
}

void Dialog::on_listWidget_itemActivated(QListWidgetItem *item)
{
    qDebug() << "on_listWidget_itemActivated";
}
