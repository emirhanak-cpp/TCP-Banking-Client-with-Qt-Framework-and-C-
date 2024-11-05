/********************************************************************************
** Form generated from reading UI file 'depositApproval.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITAPPROVAL_H
#define UI_DEPOSITAPPROVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_depositApprovalClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *depositInfoLabel;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *depositApprovalClass)
    {
        if (depositApprovalClass->objectName().isEmpty())
            depositApprovalClass->setObjectName("depositApprovalClass");
        depositApprovalClass->resize(343, 121);
        gridLayout = new QGridLayout(depositApprovalClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        depositInfoLabel = new QLabel(depositApprovalClass);
        depositInfoLabel->setObjectName("depositInfoLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(15);
        font.setBold(false);
        depositInfoLabel->setFont(font);
        depositInfoLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        depositInfoLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(depositInfoLabel);

        label_2 = new QLabel(depositApprovalClass);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(20);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(depositApprovalClass);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(depositApprovalClass);

        QMetaObject::connectSlotsByName(depositApprovalClass);
    } // setupUi

    void retranslateUi(QDialog *depositApprovalClass)
    {
        depositApprovalClass->setWindowTitle(QCoreApplication::translate("depositApprovalClass", "depositApproval", nullptr));
        depositInfoLabel->setText(QCoreApplication::translate("depositApprovalClass", "Yat\304\261r\304\261lacak Miktar: -", nullptr));
        label_2->setText(QCoreApplication::translate("depositApprovalClass", "Bu i\305\237lemi onayl\304\261yor musunuz?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class depositApprovalClass: public Ui_depositApprovalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITAPPROVAL_H
