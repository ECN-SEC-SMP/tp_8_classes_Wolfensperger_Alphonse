#pragma once
#include <iostream>
#include "../animal.h"

#ifndef pierre_h
#define pierre_h

using namespace std;


class Pierre : public Animal{
public:
  void setAttaque();
  void deplace(int maxX, int maxY);
};

#endif