#include "normalclass.h"
#include <QDebug>

NormalClass::NormalClass() : QObject()
{
   wc      = new WidgetClass();
   _thread = new QThread();
   this->moveToThread(_thread);
   connect(this, SIGNAL(__startThread(int)), wc, SLOT(setLabelText(int)));
   connect(_thread, SIGNAL(started()), this, SLOT(whileLoopFunction()));
   _thread->start();
}


void NormalClass::whileLoopFunction()
{
   int i = 1;

   while (true)
   {
      QThread::msleep(1);
//      emit __startThread(i++);
      qDebug() << "----------------------------------";
      qDebug() << Q_FUNC_INFO << _thread;
      wc->setLabelText(i++);
   }
}
