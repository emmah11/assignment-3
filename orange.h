#ifndef ORANGE_H
#define ORANGE_H

#include "CitrusFruit.h"

class Orange : public CitrusFruit {

 public:
     
     float ph;

 Orange(float ph): CitrusFruit(ph){}

  virtual const char * getName(){ return "Orange Fruit";}

 virtual float getPh(){ return ph * 0.5; }

 };
 
#endif