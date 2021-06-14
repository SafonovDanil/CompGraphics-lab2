#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include <QWidget>
#include <QPushButton>
#include "area.h"

class MainWindow : public QWidget
{
protected:
 QTextCodec *codec;
 Area * area; // область отображения рисунка
 QPushButton * btn;
public:
 MainWindow();
};
#endif
