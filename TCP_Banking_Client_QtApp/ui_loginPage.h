/********************************************************************************
** Form generated from reading UI file 'loginPage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginPageClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usernameLineEdit;
    QLabel *label_3;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginPushButton;
    QSpacerItem *horizontalSpacer_2;
    QLabel *statusLabel;

    void setupUi(QWidget *loginPageClass)
    {
        if (loginPageClass->objectName().isEmpty())
            loginPageClass->setObjectName("loginPageClass");
        loginPageClass->resize(328, 236);
        gridLayout = new QGridLayout(loginPageClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(loginPageClass);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(25);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(loginPageClass);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(15);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        usernameLineEdit = new QLineEdit(loginPageClass);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(usernameLineEdit);

        label_3 = new QLabel(loginPageClass);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_3);

        passwordLineEdit = new QLineEdit(loginPageClass);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(passwordLineEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginPushButton = new QPushButton(loginPageClass);
        loginPushButton->setObjectName("loginPushButton");
        loginPushButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(loginPushButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        statusLabel = new QLabel(loginPageClass);
        statusLabel->setObjectName("statusLabel");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font2.setPointSize(12);
        font2.setBold(false);
        statusLabel->setFont(font2);
        statusLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        statusLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(statusLabel);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(loginPageClass);

        QMetaObject::connectSlotsByName(loginPageClass);
    } // setupUi

    void retranslateUi(QWidget *loginPageClass)
    {
        loginPageClass->setWindowTitle(QCoreApplication::translate("loginPageClass", "loginPage", nullptr));
        label->setText(QCoreApplication::translate("loginPageClass", "BANKALAR PORTAL'I", nullptr));
        label_2->setText(QCoreApplication::translate("loginPageClass", "Kullan\304\261c\304\261 Ad\304\261:", nullptr));
        label_3->setText(QCoreApplication::translate("loginPageClass", "\305\236ifre:", nullptr));
        loginPushButton->setText(QCoreApplication::translate("loginPageClass", "Giri\305\237 Yap", nullptr));
        statusLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class loginPageClass: public Ui_loginPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
