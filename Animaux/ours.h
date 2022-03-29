#pragma once
#include <iostream>
#include "../animal.h"
#ifndef ours_h
#define ours_h
using namespace std;


class Ours : public Animal{
public:
  voidsetAttaque();
  voiddeplace(int maxX, int maxY);
};

#endif