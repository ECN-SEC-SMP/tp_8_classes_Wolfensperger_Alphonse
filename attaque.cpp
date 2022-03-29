#include <iostream>
#include "attaque.h"
#include "stdlib.h"
using namespace std;

//----- Constructeurs : -----//
Attaque::Attaque(){
 srand(time(NULL));
 int nombre = rand()% (3);
 this->type = nombre;
  
} //crée une attaque random
Attaque::Attaque(int a){
  this->type = a;
  
} //crée une attaque spécifique
int Attaque:: getAttaque() const{}
bool Attaque::resoudreAttaque(Attaque &a) const{}
string Attaque::getNomAttaque() const{}