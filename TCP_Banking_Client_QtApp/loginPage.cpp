#include "loginPage.h"
#include <string>
#include <chrono>
#include <thread>
#include "TCPBankingClass.h"
#define pass (void)0;

loginPage::loginPage(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
}
Ui_loginPageClass loginPage::getUi()
{
    return ui;
}

QString loginPage::getUsername()
{
    return username;
}

QString loginPage::getPassword()
{
    return password;
}

int loginPage::getLoginPermission()
{
    return loginPermission;
}

void loginPage::on_loginPushButton_clicked()
{
    TCPBankingClass TCPBankingObject;
    //TCPBankingObject.initializeConnection();

    if (connection == true)
    {
        pass;
    }
    else
    {
        if (TCPBankingObject.initializeConnection() != 1)
        {
            ui.statusLabel->setText("Sunucuya baglanirken bir hata olustu.");
        }
        else
        {
            connection = true;
        }
    }

    username = ui.usernameLineEdit->text();
    password = ui.passwordLineEdit->text();

    TCPBankingObject.sendData(getUsername());
    std::this_thread::sleep_for(std::chrono::seconds(1));
    TCPBankingObject.sendData(getPassword());
    std::this_thread::sleep_for(std::chrono::seconds(1));

    loginPermission = TCPBankingObject.receiveData();
    std::this_thread::sleep_for(std::chrono::seconds(1));

    //ui.statusLabel->setText(QString::fromStdString(getLoginPermission()));

    getLoginPermission();
    if (getLoginPermission() == 1)
    {
        ui.statusLabel->setText("Hesabiniza giris yapildi.");
    }
    else if (getLoginPermission() == 0)
    {
        ui.statusLabel->setText("Kullanici adi veya sifre hatali.");
    }
    else
    {
        ui.statusLabel->setText("Sunucuya baglanirken bir hata olustu.");
    }
}

loginPage::~loginPage()
{}
