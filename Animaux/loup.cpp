#include <iostream>
#include "loup.h"
using namespace std;

void Loup::setAttaque() {
  Attaque temp; 
  this->typeAttaque = temp;
}

void Loup::deplace(int maxX, int maxY) {
  srand(time(NULL));
  int randx=rand()%(10);
  int randy=rand()%(10);
  this->x=randx;
  this->y=randy;
}