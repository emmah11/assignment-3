#include<iostream>
#include <string>
#include "lemon.h"
#include "orange.h"
#include "CitrusFruit.h"

 using namespace std;

 void PrintTheFruits(CitrusFruit &fruit){

 cout << "fruit is a " << fruit.getName()

 << " and has a pH " << fruit.getPh() << endl;

 }
 

 int main(){

 Lemon lemon();
  Orange orange();
  
  lemon le1(1.4), le2(1.5), le3(1.234);
  orange or1(0.4), or2(0.3), or3(0.5);
  CitrusFruit *cfruit[] ={&le1, &le2, &le3, &or1, &or2, &or3};
  for(int i =0; i < 6; i++)
      cout << cfruits[i]->getName() << "has a pH "
           << cfruits[i]->getPh() <<endl;
  
  PrintTheFruits(lemon);
  PrintTheFruits(orange);
  
 //This is perfectly legal!

 //CitrusFruit &rlemon = lemon;

 //CitrusFruit *plemon = &lemon;

 //cout << "lemon is a " << lemon.getName()

 //<< " and has a pH " << lemon.getPh() << endl;

 //cout << "rlemon is a " << rlemon.getName()

 //<< " and has a pH " << rlemon.getPh() << endl;

 //cout << "plemon is a " << plemon->getName()

 //<< " and has a pH " << plemon->getPh() << endl;

 }
