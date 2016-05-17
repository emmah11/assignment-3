#include "roller.h"
#include <string>
virtual std::string drawLine(){
return getName().append(" draw a line.");
}
virtual std::string drawCircle(){
return getName().append( "draw a circle.");
}

