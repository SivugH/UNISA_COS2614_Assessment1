#include "clinputinfo.h"
#include "ui_clinputinfo.h"
#include <QStringList>
#include <QMessageBox>

clInputInfo::clInputInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clInputInfo)
{
    ui->setupUi(this);

}

clInputInfo::~clInputInfo()
{
    delete ui;
}

void clInputInfo::slotSaveBtnClicked()
{
    QString loInfo = ui->meEdtInput->text();//validation of the
    QStringList loList(loInfo.split(" "));
    QString loInitials = "";
    QString loGenKey = "";
    int loGenKeySize = 0;
    QMessageBox msg;
    msg.setWindowTitle("Message");
    msg.setIcon(QMessageBox::Information);


    if (loList.size() >= 2)
    {
        foreach (QString item, loList)
        {
            loInitials.append(item.left(1));
            loGenKeySize = loGenKeySize + item.count();
        }
        loGenKey.append(loInitials.left(2));
        loGenKey = loGenKey.append(QString::number(loGenKeySize));
        loGenKey = loGenKey.leftJustified(6,'0');

        msg.setText(loGenKey);
        msg.exec();
    }
    else
    {
        msg.setText("Enter correct full name");
        msg.exec();
    }
}

void clInputInfo::slotCancelBtnClicked()
{
    std::cout << "cancel btn pressed" << std::endl;
}
