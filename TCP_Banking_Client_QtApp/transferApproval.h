#pragma once

#include <QDialog>
#include "ui_transferApproval.h"

class transferApproval : public QDialog
{
	Q_OBJECT

public:
	transferApproval(QWidget *parent = nullptr);
	~transferApproval();

private:
	Ui::transferApprovalClass ui;
};
