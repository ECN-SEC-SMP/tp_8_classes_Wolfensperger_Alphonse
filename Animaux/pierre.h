#pragma once
#include <iostream>
#include "../animal.h"
#ifndef pierre_h
#define pierre_h
using namespace std;


class Pierre {
private :
  Animal animalPierre;
public:
  void setAttaque(Animal &a);
  void deplace(int maxX, int maxY);
};

#endif