#ifndef NORMALCLASS_H
#define NORMALCLASS_H

#include <QObject>
#include <QThread>
#include "widgetclass.h"


// the class that we want to create the thread and the while loop

class NormalClass : public QObject
{
   Q_OBJECT
public:
   NormalClass();
   void setLabelText(QString string);

   WidgetClass *wc = nullptr;

private:
   QThread *_thread = nullptr;
public slots:
   void whileLoopFunction();

signals:
   void __startThread(int);
};

#endif // NORMALCLASS_H
