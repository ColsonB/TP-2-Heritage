#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QLineEdit.h"

class LineEdit : public QMainWindow
{
    Q_OBJECT

public:
    LineEdit(QWidget *parent = Q_NULLPTR);

private:
    Ui::QLineEditClass ui;
};
