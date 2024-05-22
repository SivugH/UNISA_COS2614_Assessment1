#ifndef CLINPUTINFO_H
#define CLINPUTINFO_H

#include <QDialog>
#include <QtGui>
#include <QLabel>
#include <iostream>

namespace Ui {
class clInputInfo;
}

class clInputInfo : public QDialog
{
    Q_OBJECT

public:
    explicit clInputInfo(QWidget *parent = 0);
    ~clInputInfo();

private:
    Ui::clInputInfo *ui;

    void slotSaveBtnClicked();
    void slotCancelBtnClicked();

};

#endif // CLINPUTINFO_H
