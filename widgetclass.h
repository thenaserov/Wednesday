#ifndef WIDGETCLASS_H
#define WIDGETCLASS_H

#include <QObject>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class WidgetClass;
}
QT_END_NAMESPACE

class WidgetClass : public QWidget
{
   Q_OBJECT
public:
   explicit WidgetClass(QWidget *parent = nullptr);
public slots:
   void setLabelText(int value);

private slots:
   void _setLabelText(int value);

private:
   Ui::WidgetClass *ui;
   int y = 0;

signals:
   void __setLabelText(int value);
};

#endif // WIDGETCLASS_H
