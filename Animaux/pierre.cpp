#include <iostream>
#include "pierre.h"
using namespace std;

void Pierre::setAttaque() {
  Attaque temp(0);
  this->typeAttaque = temp;
}

void Pierre::deplace(int maxX, int maxY) {}