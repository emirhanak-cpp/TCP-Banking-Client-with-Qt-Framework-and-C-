#pragma once

#include <QtWidgets/QWidget>
#include <string>
#include "ui_loginPage.h"
#include "bankPage.h"

class loginPage : public QWidget
{
    Q_OBJECT

public:
    loginPage(QWidget *parent = nullptr);
    Ui_loginPageClass getUi();
    QString getUsername();
    QString getPassword();
    int getLoginPermission();
    ~loginPage();

public slots:
    void on_loginPushButton_clicked();

private:
    Ui::loginPageClass ui;
    QString username;
    QString password;
    bool connection = false;
    int loginPermission = false;
};
