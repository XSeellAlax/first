#include <QtGui>
#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget *parent)
    : QDialog(parent)
{
    ui = new Ui::GoToCellDialog;
    //setupUi(this);
    ui->setupUi(this);
    QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");//正则表达式
    ui->lineEdit->setValidator(new QRegExpValidator(regExp, this));
    //信号与槽
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &GoToCellDialog::on_lineEdit_textChanged);
    connect(ui->okButton, &QPushButton::clicked, this, &GoToCellDialog::accept);
    connect(ui->cancelButton, &QPushButton::clicked, this, &GoToCellDialog::reject);
    /*
    //connect(ui->lineEdit, SIGNAL(textChanged(const QString&)), this, SLOT(on_lineEdit_textChanged()));
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui->cancelButton, SIGNAL(clicked()), this, SLOT(reject()));
    //connect(cancelButton, SIGNAL(clicked()))*/
    //connect(ui->lineEdit, &QLineEdit::textChanged, this, &GoToCellDialog::on_lineEdit_textChanged);
}

void GoToCellDialog::on_lineEdit_textChanged(){
    ui->okButton->setEnabled(ui->lineEdit->hasAcceptableInput());
}
