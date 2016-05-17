#ifndef PEN_H
#define PEN_H
#include "pen.h"

class RollerBallPen :public Pen {
public:
RollerBallPen(std::string Pen_name)
:Pen(pen_name){}
RollerBallPen() :Pen(std::string("RollerBallPen")){}
virtual std::string drawLine();
}
#endif