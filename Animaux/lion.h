#pragma once
#include <iostream>
#include "../animal.h"
#ifndef lion_h
#define lion_h
using namespace std;


class Lion : public Animal{
public:
  voidsetAttaque();
  voiddeplace(int maxX, int maxY);
};

#endif