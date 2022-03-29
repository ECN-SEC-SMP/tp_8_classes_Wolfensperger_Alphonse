#include <iostream>
#include "attaque.h"
using namespace std;

//----- Constructeurs : -----//
Attaque::Attaque(){} //crée une attaque random
Attaque::Attaque(int a){} //crée une attaque spécifique
int Attaque:: getAttaque() const{}
bool Attaque::resoudreAttaque(Attaque &a) const{}
string Attaque::getNomAttaque() const{}