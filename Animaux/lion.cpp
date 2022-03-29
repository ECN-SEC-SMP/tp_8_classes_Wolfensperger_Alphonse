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
  switch ( randx )
    {
     case 0:
        this->x+=(this->x-1)%maxX;
        this->y+=(this->y-1)%maxY;
        break;
     case 1:
        this->x+=(this->x+1)%maxX;
        this->y+=(this->y+1)%maxY;
        break;
     case 2:
        this->x+=(this->x+1)%maxX;
        this->y+=(this->y-1)%maxY;
        break;
     case 3:
        this->x+=(this->x-1)%maxX;
        this->y+=(this->y+1)%maxY;
        break;
    }
}