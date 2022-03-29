#include <iostream>
#include "animal.h"
using namespace std;

//----- Constructeurs : -----//
Animal::Animal(int maxX, int maxY){
  this->x=maxX;
  this->y=maxY;
}

Animal::Animal(int maxX, int maxY,int a,int b){
  this->x=a%maxX; //si l'on dépasse la limite
  this->y=b%maxY;
}
//--------------------------//

int Animal::getX() const{
  return this->x;
}

int Animal::getY() const{
  return this->y;
}

bool Animal::getVivant() const{
  return this->vivant;
}

Attaque Animal::getAttaque() const{
  
}

void Animal::setVivant(bool v){
  this->vivant = v;
}
bool Animal::attaque(Animal &a){}
void Animal::setAttaque(){}
void Animal::deplace(int maxX, int maxY){}
