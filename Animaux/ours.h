#pragma once
#include <iostream>
#include "../animal.h"
#ifndef ours_h
#define ours_h
using namespace std;


class Ours : public Animal{
public:
  void setAttaque();
  void deplace(int maxX, int maxY);
};

#endif