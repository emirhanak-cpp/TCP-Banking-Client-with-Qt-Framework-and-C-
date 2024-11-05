#pragma once

#include <QWidget>
#include "ui_transferPage.h"

class transferPage : public QWidget
{
	Q_OBJECT

public:
	transferPage(QWidget *parent = nullptr);
	~transferPage();

private:
	Ui::transferPageClass ui;
};
