#pragma once

#include <QDialog>
#include "ui_depositApproval.h"

class depositApproval : public QDialog
{
	Q_OBJECT

public:
	depositApproval(QWidget *parent = nullptr);
	~depositApproval();

private:
	Ui::depositApprovalClass ui;
};
