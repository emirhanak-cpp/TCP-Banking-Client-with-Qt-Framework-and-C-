#pragma once

#include <QDialog>
#include "ui_withdrawApproval.h"

class withdrawApproval : public QDialog
{
	Q_OBJECT

public:
	withdrawApproval(QWidget *parent = nullptr);
	~withdrawApproval();

private:
	Ui::withdrawApprovalClass ui;
};
