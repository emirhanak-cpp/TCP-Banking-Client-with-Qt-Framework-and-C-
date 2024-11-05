#pragma once

#include <QWidget>
#include "ui_bankPage.h"
#include "ui_loginPage.h"

class bankPage : public QWidget
{
	Q_OBJECT

public:
	bankPage(QWidget *parent = nullptr);
	~bankPage();

private:
	Ui::bankPageClass ui;
};
