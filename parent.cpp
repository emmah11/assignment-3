#include<iostream>

int main()

{
class Parent {
public:
  virtual const char *getName(){return "Parent";}
};

class Child :public Parent {
 public:
virtual const char *getName(){ return "Child"; }
};
