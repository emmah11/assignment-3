
#ifndef PEN_H
#define PEN_H

#include <string>

class Pen{
std::string Pen_name;
public:
Pen(std::string pen_name = "Pen"){
 this->Pen_name = pen_name;
 //(*this).Pen_name = pen_name;
}
std::string getName(){
return Pen_name;
}
virtual std::string drawLine();
virtual std::string drawCircle();
};

#endif























