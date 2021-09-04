#include "widgetclass.h"
#include "ui_widgetclass.h"

#include <qthread.h>
#include <QDebug>

WidgetClass::WidgetClass(QWidget *parent)
   : QWidget(parent),
   ui(new Ui::WidgetClass)
{
   ui->setupUi(this);
   this->setWindowTitle("Widget Class Wednesday");
   connect(this, SIGNAL(__setLabelText(int)), this, SLOT(_setLabelText(int)));
   this->show();
}


void WidgetClass::setLabelText(int value)
{
   emit __setLabelText(value);

   qDebug() << Q_FUNC_INFO << QThread::currentThread();
}


void WidgetClass::_setLabelText(int value)
{
   ui->spinBox->setValue(value);
   qDebug() << Q_FUNC_INFO << QThread::currentThread();
}
