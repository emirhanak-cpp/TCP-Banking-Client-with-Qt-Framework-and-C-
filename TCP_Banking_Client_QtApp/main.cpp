#include <iostream>
#include <string>

#include "bankPage.h"
#include "depositApproval.h"
#include "depositPage.h"
#include "loginPage.h"
#include "transferApproval.h"
#include "transferPage.h"
#include "withdrawApproval.h"
#include "withdrawPage.h"
#include "TCPBankingClass.h"

#include <QtWidgets/QApplication>
#include <QDebug>
#include <QObject>
#include <winsock2.h> 
#include <Ws2tcpip.h>

#pragma comment (lib, "ws2_32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    bankPage bankPageWindow;
    depositApproval depositApprovalWindow;
    depositPage depositPageWindow;
    loginPage loginPageWindow;
    transferApproval transferApprovalWindow;
    transferPage transferPageWindow;
    withdrawApproval withdrawApprovalWindow;
    withdrawPage withdrawPageWindow;
    
    Ui_loginPageClass loginPageUi = loginPageWindow.getUi();

    QObject::connect(loginPageUi.loginPushButton, SIGNAL(clicked()), loginPageUi.loginPushButton, SLOT(on_loginPushButton_clicked()));
    qDebug();

    loginPageWindow.show();

    return a.exec();
}
