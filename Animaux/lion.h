#pragma once
#include <iostream>
#include "../animal.h"
#ifndef lion_h
#define lion_h
using namespace std;


class Lion {
private :
  Animal animalLion;
public:
  voidsetAttaque(Animal &a);
  voiddeplace(int maxX, int maxY);
};

#endif