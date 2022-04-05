#pragma once
#include <iostream>
#include "attaque.h"

#ifndef animal_h
#define animal_h

using namespace std;


class Animal {
private:
  string nom;
  bool vivant;
protected:
  int x;
  int y;
  Attaque typeAttaque;
public:
  Animal(int maxX, int maxY);
  Animal(int maxX, int maxY,int a,int b);
  int getX() const;
  int getY() const;
  bool getVivant() const;
  Attaque getAttaque() const;
  void setVivant(bool v);
  bool attaque(Animal &a);
  virtual void setAttaque()=0; //virtuelle pure
  virtual void deplace(int maxX, int maxY)=0;//virtuelle pure
};

#endif
