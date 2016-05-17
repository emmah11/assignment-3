#ifndef FOUNTAIN_H
#define FOUNTAIN_H
#include "pen.h"

class FountainPen :public Pen {
    std::string Pen;
public:
FountainPen(std::string Pen_name)
:Pen(Pen_name){}
FountainPen() :Pen(std::string("FountainPen")){}
virtual std::string drawLine();
virtual std::string drawCircle();
};

#endif

