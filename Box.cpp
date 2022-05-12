#include "Box.h"

void setwidth(int w){
  width=w;
}
void setlength(int l){
  length=l;
}
void setheight(int h){
  height=h;
}
int getlength(){
  return length;
}
int getwidth{
  return width;
}
int getheight{
  return hight;
}

int Box::calcVolume() {
  return height*width*length;
}
