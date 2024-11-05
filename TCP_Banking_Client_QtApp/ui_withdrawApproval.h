/********************************************************************************
** Form generated from reading UI file 'withdrawApproval.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWAPPROVAL_H
#define UI_WITHDRAWAPPROVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_withdrawApprovalClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *withdrawInfoLabel;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *withdrawApprovalClass)
    {
        if (withdrawApprovalClass->objectName().isEmpty())
            withdrawApprovalClass->setObjectName("withdrawApprovalClass");
        withdrawApprovalClass->resize(343, 111);
        gridLayout = new QGridLayout(withdrawApprovalClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        withdrawInfoLabel = new QLabel(withdrawApprovalClass);
        withdrawInfoLabel->setObjectName("withdrawInfoLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(15);
        font.setBold(false);
        withdrawInfoLabel->setFont(font);
        withdrawInfoLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        withdrawInfoLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(withdrawInfoLabel);

        label_2 = new QLabel(withdrawApprovalClass);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(20);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(withdrawApprovalClass);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(withdrawApprovalClass);

        QMetaObject::connectSlotsByName(withdrawApprovalClass);
    } // setupUi

    void retranslateUi(QDialog *withdrawApprovalClass)
    {
        withdrawApprovalClass->setWindowTitle(QCoreApplication::translate("withdrawApprovalClass", "withdrawApproval", nullptr));
        withdrawInfoLabel->setText(QCoreApplication::translate("withdrawApprovalClass", "\303\207ekilecek Miktar: -", nullptr));
        label_2->setText(QCoreApplication::translate("withdrawApprovalClass", "Bu i\305\237lemi onayl\304\261yor musunuz?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class withdrawApprovalClass: public Ui_withdrawApprovalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWAPPROVAL_H
