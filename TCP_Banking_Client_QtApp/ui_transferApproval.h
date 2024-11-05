/********************************************************************************
** Form generated from reading UI file 'transferApproval.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERAPPROVAL_H
#define UI_TRANSFERAPPROVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_transferApprovalClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *transferInfoLabel;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *transferApprovalClass)
    {
        if (transferApprovalClass->objectName().isEmpty())
            transferApprovalClass->setObjectName("transferApprovalClass");
        transferApprovalClass->resize(359, 185);
        gridLayout = new QGridLayout(transferApprovalClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        transferInfoLabel = new QLabel(transferApprovalClass);
        transferInfoLabel->setObjectName("transferInfoLabel");
        QFont font;
        font.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font.setPointSize(15);
        font.setBold(false);
        transferInfoLabel->setFont(font);
        transferInfoLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        transferInfoLabel->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        verticalLayout->addWidget(transferInfoLabel);

        label_2 = new QLabel(transferApprovalClass);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Gill Sans MT")});
        font1.setPointSize(20);
        font1.setBold(false);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_2);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(transferApprovalClass);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout_2->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(transferApprovalClass);

        QMetaObject::connectSlotsByName(transferApprovalClass);
    } // setupUi

    void retranslateUi(QDialog *transferApprovalClass)
    {
        transferApprovalClass->setWindowTitle(QCoreApplication::translate("transferApprovalClass", "transferApproval", nullptr));
        transferInfoLabel->setText(QCoreApplication::translate("transferApprovalClass", "IBAN: -\n"
"Ad\304\261 / Soyad\304\261: -\n"
"Transfer Edilecek Miktar: -", nullptr));
        label_2->setText(QCoreApplication::translate("transferApprovalClass", "Bu i\305\237lemi onayl\304\261yor musunuz?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transferApprovalClass: public Ui_transferApprovalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERAPPROVAL_H
