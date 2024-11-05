#pragma once

#include <QWidget>
#include "ui_depositPage.h"

class depositPage : public QWidget
{
	Q_OBJECT

public:
	depositPage(QWidget *parent = nullptr);
	~depositPage();

private:
	Ui::depositPageClass ui;
};
