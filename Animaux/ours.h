#pragma once
#include <iostream>
#include "../animal.h"
#ifndef ours_h
#define ours_h
using namespace std;


class Ours {
private :
  Animal animalOurs;
public:
  voidsetAttaque(Animal &a);
  voiddeplace(int maxX, int maxY);
};

#endif