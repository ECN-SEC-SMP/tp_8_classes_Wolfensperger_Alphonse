#pragma once
#include <iostream>
#include "../animal.h"
#ifndef loup_h
#define loup_h
using namespace std;


class Loup {
private :
  Animal animalLoup;
public:
  voidsetAttaque(Animal &a);
  voiddeplace(int maxX, int maxY);
};

#endif