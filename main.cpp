#include "mainwindow.h"
#include "normalclass.h"
#include "widgetclass.h"
#include <QApplication>

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
//   MainWindow   w;
//   w.show();
   NormalClass n;

   return a.exec();
}
