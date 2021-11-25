#include "LineEdit.h"
#include "QLineEdit"
#include <qDebug>

LineEdit::LineEdit(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);

	QLineEdit *lineEdit = new QLineEdit;
	lineEdit->resize(100, 20);
	lineEdit->move(15, 50);
	lineEdit->show();
	lineEdit->setParent(this);
}
