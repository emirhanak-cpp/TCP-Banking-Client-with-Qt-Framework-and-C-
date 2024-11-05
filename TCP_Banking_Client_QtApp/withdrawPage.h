#pragma once

#include <QWidget>
#include "ui_withdrawPage.h"

class withdrawPage : public QWidget
{
	Q_OBJECT

public:
	withdrawPage(QWidget *parent = nullptr);
	~withdrawPage();

private:
	Ui::withdrawPageClass ui;
};
