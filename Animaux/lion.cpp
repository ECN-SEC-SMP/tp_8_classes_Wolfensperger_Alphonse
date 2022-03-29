#include <iostream>
#include "lion.h"
#include "stdlib.h"
using namespace std;

void Lion:: setAttaque() {
  srand(time(NULL));
  int nbe=rand()%(2+1);
  Attaque temp(nbe); 
  this->typeAttaque = temp;
}

void Lion:: deplace(int maxX, int maxY) {
  srand(time(NULL));
  int randnum=rand()%(4);


  //(1,1), (1,-1), (-1,1), (-1,-1)
  switch ( randnum )
    {
     case 0:
        this->x += 1;
        this->y += 1;
        break;
     case 1:
        this->x += 1;
        this->y -= 1;
        break;
     case 2:
        this->x -= 1;
        this->y += 1;
        break;
     case 3:
        this->x -= 1;
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