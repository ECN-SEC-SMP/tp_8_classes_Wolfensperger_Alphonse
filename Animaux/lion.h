#pragma once
#include <iostream>
#include "../animal.h"
#ifndef lion_h
#define lion_h
using namespace std;


class Lion : public Animal{
public:
  void setAttaque();
  void deplace(int maxX, int maxY);
};

#endif