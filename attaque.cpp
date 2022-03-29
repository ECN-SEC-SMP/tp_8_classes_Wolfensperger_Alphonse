#include <iostream>
#include "attaque.h"
#include "stdlib.h"
using namespace std;
// 0 :pierre, 1: Feuille, 2:CiseauxAttaque
//----- Constructeurs : -----//
Attaque::Attaque(void){ //crée une attaque random
 srand(time(NULL));
 int nombre = rand()% (3);
 this->type = nombre; 
}

Attaque::Attaque(int a){ //crée une attaque spécifique
  this->type = a; 
}
//--------------------------//

int Attaque::getAttaque() const{
  return this->type;
}

bool Attaque::resoudreAttaque(Attaque &a) const{
  //Si l'adversaire gagne c'est faux
  //Et si le joueur gagne c'est vrai
  //Le match nul n'est pas encore implémenté...........................................
  int joueur = this->type;
  int adversaire = a.type;
  if(joueur==0 && adversaire == 2){
    return true;
  }
  else if(joueur==1 && adversaire == 0){
    return true;
  }
  else if(joueur==2 && adversaire == 1){
    return true;
  }
  else if (joueur=adversaire){
    srand(time(NULL));
    int partie = rand()% (2);
    
    if(partie==1) {return true;}
    
    else return false;
  }
  else{
      return false;
    }
  
}

string Attaque::getNomAttaque() const{
  int nb = this->type;
  if(nb == 0) {return "Pierre";}
  else if(nb == 1){ return "Feuille";}
  else {return "Ciseaux";}
}