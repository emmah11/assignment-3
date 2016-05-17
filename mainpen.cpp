#include <iostream>
#include <string>
#include "fountain.h"
#include "pen.h"
#include "roller.h"

using namespace std;
void WriteWithPen(pen &pen){
cout << pen.drawLine() <<endl;
cout << pen.drawCircle() <<endl;
}

int main(){
 FountainPen fp;
 WriteWithPen(fp);
 RollerBallPen rbp(" A Pen that uses a Roller Ball");
 WriteWithPen(rbp);
 Pen pen;
 WriteWithPen(pen);
}