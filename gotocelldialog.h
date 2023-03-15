#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H
//Wangpeng2021051615312
//2023/3/14
//单继承
#include <QDialog>
#include "ui_gotocelldialog.h"

class GoToCellDialog : public QDialog//, public Ui::GoToCellDialog
{
    Q_OBJECT
public:
    GoToCellDialog(QWidget *parent = 0);//Constructor function
    //
//private slots:

   void on_lineEdit_textChanged();

private:
    Ui::GoToCellDialog *ui;
};

#endif // GOTOCELLDIALOG_H
