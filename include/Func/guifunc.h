#ifndef GUIFUNC_H
#define GUIFUNC_H
#include "qwidget.h"


//绘制矩形/边框/光效


void paintRect(QWidget* aim,QColor color);
void paintSide(QWidget* aim,QColor color);
void paintLight(QWidget* aim,QColor color);

//将图片重整为没有透明行列的方形
QPixmap resizeToRect(QPixmap source);

//在组件附近重绘
void repaintAround(QWidget* aim);


#endif // GUIFUNC_H
