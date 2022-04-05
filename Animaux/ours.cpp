#include <iostream>
#include "ours.h"
using namespace std;

void Ours::setAttaque() {
  Attaque temp(1);
  this->typeAttaque = temp;
}


void Ours::deplace(int maxX, int maxY) {
  srand(time(NULL));
  int ind_pos=rand()%(8);
  //(2,1), (1,2), (-1,2), (-2,1), (-2,-1), (-1,-2), (1,-2), (2, -1)
  switch(ind_pos) {
    case 0:
      this->x += 2;
      this->y += 1;
      break;
    case 1:
      this->x += 1;
      this->y += 2;
      break;
    case 2:
      this->x -= 1;
      this->y += 2;
      break;
    case 3:
      this->x -= 2;
      this->y += 1;
      break;
    case 4:
      this->x -= 2;
      this->y -= 1;
      break;
    case 5:
      this->x -= 1;
      this->y -= 2;
      break;
    case 6:
      this->x += 1;
      this->y -= 2;
      break;
    case 7:
      this->x += 2;
      this->y -= 1;
      break;
  }

  if(this->x<0){
    this->x = maxX-(this->x);
  }
  else {
    this->x = (this->x)%maxX;
  }
  
  if(this->y<0){
    this->y = maxY-(this->y);
  }
  else {
    this->y = (this->y)%maxY;
  } 
}