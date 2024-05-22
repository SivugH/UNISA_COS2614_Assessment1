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
<<<<<<< HEAD

=======
>>>>>>> cef1d25a4fa7353e7918e90dab917c862707550e
    ~clInputInfo();

private:
    Ui::clInputInfo *ui;

<<<<<<< HEAD
public slots:
=======
>>>>>>> cef1d25a4fa7353e7918e90dab917c862707550e
    void slotSaveBtnClicked();
    void slotCancelBtnClicked();

};

#endif // CLINPUTINFO_H
