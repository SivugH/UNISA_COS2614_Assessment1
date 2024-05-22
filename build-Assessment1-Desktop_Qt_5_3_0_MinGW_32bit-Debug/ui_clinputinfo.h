/********************************************************************************
** Form generated from reading UI file 'clinputinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLINPUTINFO_H
#define UI_CLINPUTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_clInputInfo
{
public:
    QLineEdit *meEdtInput;
    QLabel *melblInput;
    QPushButton *meBtnCancel;
    QPushButton *meBtnSave;

    void setupUi(QDialog *clInputInfo)
    {
        if (clInputInfo->objectName().isEmpty())
            clInputInfo->setObjectName(QStringLiteral("clInputInfo"));
        clInputInfo->resize(323, 103);
        meEdtInput = new QLineEdit(clInputInfo);
        meEdtInput->setObjectName(QStringLiteral("meEdtInput"));
        meEdtInput->setGeometry(QRect(50, 20, 251, 20));
        melblInput = new QLabel(clInputInfo);
        melblInput->setObjectName(QStringLiteral("melblInput"));
        melblInput->setGeometry(QRect(10, 20, 46, 13));
        meBtnCancel = new QPushButton(clInputInfo);
        meBtnCancel->setObjectName(QStringLiteral("meBtnCancel"));
        meBtnCancel->setGeometry(QRect(220, 70, 75, 23));
        meBtnSave = new QPushButton(clInputInfo);
        meBtnSave->setObjectName(QStringLiteral("meBtnSave"));
        meBtnSave->setGeometry(QRect(140, 70, 75, 23));

        retranslateUi(clInputInfo);
        QObject::connect(meBtnSave, SIGNAL(clicked()), clInputInfo, SLOT(slotSaveBtnClicked()));
        QObject::connect(meBtnCancel, SIGNAL(clicked()), clInputInfo, SLOT(slotCancelBtnClicked()));

        QMetaObject::connectSlotsByName(clInputInfo);
    } // setupUi

    void retranslateUi(QDialog *clInputInfo)
    {
        clInputInfo->setWindowTitle(QApplication::translate("clInputInfo", "Important Info", 0));
        melblInput->setText(QApplication::translate("clInputInfo", "Input:", 0));
        meBtnCancel->setText(QApplication::translate("clInputInfo", "Cancel", 0));
        meBtnSave->setText(QApplication::translate("clInputInfo", "Save", 0));
    } // retranslateUi

};

namespace Ui {
    class clInputInfo: public Ui_clInputInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLINPUTINFO_H
