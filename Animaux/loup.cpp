#include <iostream>
#include "loup.h"
using namespace std;

void Loup::setAttaque() {
  Attaque temp; 
  this->typeAttaque = temp;
}

void Loup::deplace(int maxX, int maxY) {
  srand(time(NULL));
  int randx=rand()%(maxX);
  int randy=rand()%(maxY);
  this->x=randx;
  this->y=randy;
}