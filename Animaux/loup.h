#pragma once
#include <iostream>
#include "../animal.h"
#ifndef loup_h
#define loup_h
using namespace std;


class Loup : public Animal{
public:
  void setAttaque();
  void deplace(int maxX, int maxY);
};

#endif