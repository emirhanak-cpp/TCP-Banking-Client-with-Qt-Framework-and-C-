/********************************************************************************
** Form generated from reading UI file 'bankPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANKPAGE_H
#define UI_BANKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bankPageClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *bankNameLabel;
    QLabel *infoLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *balanceLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *ibanLabel;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *transferButton;
    QPushButton *withdrawButton;
    QPushButton *depositButton;

    void setupUi(QWidget *bankPageClass)
    {
        if (bankPageClass->objectName().isEmpty())
            bankPageClass->setObjectName("bankPageClass");
        bankPageClass->resize(406, 226);
        gridLayout = new QGridLayout(bankPageClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        bankNameLabel = new QLabel(bankPageClass);
        bankNameLabel->setObjectName("bankNameLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(25);
        bankNameLabel->setFont(font);
        bankNameLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(bankNameLabel);

        infoLabel = new QLabel(bankPageClass);
        infoLabel->setObjectName("infoLabel");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(15);
        infoLabel->setFont(font1);
        infoLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(infoLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(bankPageClass);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font2.setPointSize(20);
        label_3->setFont(font2);
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_3);

        balanceLabel = new QLabel(bankPageClass);
        balanceLabel->setObjectName("balanceLabel");
        balanceLabel->setFont(font2);
        balanceLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(balanceLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(bankPageClass);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);
        label_4->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_4);

        ibanLabel = new QLabel(bankPageClass);
        ibanLabel->setObjectName("ibanLabel");
        ibanLabel->setFont(font2);
        ibanLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_2->addWidget(ibanLabel);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        transferButton = new QPushButton(bankPageClass);
        transferButton->setObjectName("transferButton");

        horizontalLayout_3->addWidget(transferButton);

        withdrawButton = new QPushButton(bankPageClass);
        withdrawButton->setObjectName("withdrawButton");

        horizontalLayout_3->addWidget(withdrawButton);

        depositButton = new QPushButton(bankPageClass);
        depositButton->setObjectName("depositButton");

        horizontalLayout_3->addWidget(depositButton);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(bankPageClass);

        QMetaObject::connectSlotsByName(bankPageClass);
    } // setupUi

    void retranslateUi(QWidget *bankPageClass)
    {
        bankPageClass->setWindowTitle(QCoreApplication::translate("bankPageClass", "bankPage", nullptr));
        bankNameLabel->setText(QCoreApplication::translate("bankPageClass", "Banka Ad\304\261", nullptr));
        infoLabel->setText(QCoreApplication::translate("bankPageClass", "Ho\305\237geldiniz ... Bey / Han\304\261m", nullptr));
        label_3->setText(QCoreApplication::translate("bankPageClass", "Bakiye:", nullptr));
        balanceLabel->setText(QCoreApplication::translate("bankPageClass", "-", nullptr));
        label_4->setText(QCoreApplication::translate("bankPageClass", "IBAN:", nullptr));
        ibanLabel->setText(QCoreApplication::translate("bankPageClass", "-", nullptr));
        transferButton->setText(QCoreApplication::translate("bankPageClass", "Para Transferi", nullptr));
        withdrawButton->setText(QCoreApplication::translate("bankPageClass", "Para \303\207ekme", nullptr));
        depositButton->setText(QCoreApplication::translate("bankPageClass", "Para Yat\304\261rma", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bankPageClass: public Ui_bankPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANKPAGE_H
