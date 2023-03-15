//Wangpeng2021051615312
//2023/3/14
//单继承
#include <QApplication>
#include <QDialog>
#include "gotocelldialog.h"
//#include "ui_gotocelldialog.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);
    //Ui::GoToCell ui;
    //Ui::GoToCellDialog ui;
    //Ui::GoToCellDialog ui;
	//
    //QDialog *dialog = new QDialog;
    //ui.setupUi(dialog);
    //dialog->show();
    GoToCellDialog *dialog = new GoToCellDialog;
    dialog->show();
	return app.exec();
	
}
