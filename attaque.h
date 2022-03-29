#pragma once
#include <iostream>
using namespace std;


class Attaque {
private :
  int type; // 0 :pierre, 1: Feuille, 2:CiseauxAttaque
public:
  Attaque(); //crée une attaque random
  Attaque(int a); //crée une attaque spécifique
  int getAttaque() const;
  bool resoudreAttaque(Attaque &a) const;
  string getNomAttaque() const;
};