#include "clinputinfo.h"
#include "ui_clinputinfo.h"
<<<<<<< HEAD
#include <QStringList>
#include <QMessageBox>
=======
>>>>>>> cef1d25a4fa7353e7918e90dab917c862707550e

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
<<<<<<< HEAD
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
=======
    std::cout << "save btn pressed" << std::endl;
>>>>>>> cef1d25a4fa7353e7918e90dab917c862707550e
}

void clInputInfo::slotCancelBtnClicked()
{
    std::cout << "cancel btn pressed" << std::endl;
}
