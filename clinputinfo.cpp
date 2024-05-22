#include "clinputinfo.h"
#include "ui_clinputinfo.h"

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
    std::cout << "save btn pressed" << std::endl;
}

void clInputInfo::slotCancelBtnClicked()
{
    std::cout << "cancel btn pressed" << std::endl;
}
