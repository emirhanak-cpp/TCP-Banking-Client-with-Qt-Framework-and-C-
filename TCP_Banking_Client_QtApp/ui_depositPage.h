/********************************************************************************
** Form generated from reading UI file 'depositPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITPAGE_H
#define UI_DEPOSITPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_depositPageClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *balanceLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *depositAmountLineEdit;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *moneyDepositPushButton;
    QPushButton *cancelPushButton;
    QLabel *statusLabel;

    void setupUi(QWidget *depositPageClass)
    {
        if (depositPageClass->objectName().isEmpty())
            depositPageClass->setObjectName("depositPageClass");
        depositPageClass->resize(366, 176);
        gridLayout = new QGridLayout(depositPageClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(depositPageClass);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(20);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label);

        balanceLabel = new QLabel(depositPageClass);
        balanceLabel->setObjectName("balanceLabel");
        balanceLabel->setFont(font);
        balanceLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        balanceLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(balanceLabel);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(depositPageClass);
        label_3->setObjectName("label_3");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(15);
        font1.setBold(false);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout_2->addWidget(label_3);

        depositAmountLineEdit = new QLineEdit(depositPageClass);
        depositAmountLineEdit->setObjectName("depositAmountLineEdit");
        depositAmountLineEdit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(depositAmountLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        moneyDepositPushButton = new QPushButton(depositPageClass);
        moneyDepositPushButton->setObjectName("moneyDepositPushButton");
        moneyDepositPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(moneyDepositPushButton);

        cancelPushButton = new QPushButton(depositPageClass);
        cancelPushButton->setObjectName("cancelPushButton");
        cancelPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_5->addWidget(cancelPushButton);


        verticalLayout->addLayout(horizontalLayout_5);

        statusLabel = new QLabel(depositPageClass);
        statusLabel->setObjectName("statusLabel");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font2.setPointSize(12);
        font2.setBold(false);
        statusLabel->setFont(font2);
        statusLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        statusLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        statusLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(statusLabel);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(depositPageClass);

        QMetaObject::connectSlotsByName(depositPageClass);
    } // setupUi

    void retranslateUi(QWidget *depositPageClass)
    {
        depositPageClass->setWindowTitle(QCoreApplication::translate("depositPageClass", "depositPage", nullptr));
        label->setText(QCoreApplication::translate("depositPageClass", "Bakiye:", nullptr));
        balanceLabel->setText(QCoreApplication::translate("depositPageClass", "-", nullptr));
        label_3->setText(QCoreApplication::translate("depositPageClass", "Yat\304\261r\304\261lacak Miktar:", nullptr));
        moneyDepositPushButton->setText(QCoreApplication::translate("depositPageClass", "Yat\304\261r", nullptr));
        cancelPushButton->setText(QCoreApplication::translate("depositPageClass", "\304\260ptal", nullptr));
        statusLabel->setText(QCoreApplication::translate("depositPageClass", "status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depositPageClass: public Ui_depositPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITPAGE_H
