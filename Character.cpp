#include "Character.h"

//Créations des constructeurs
Character::Character(){
	speed_ = 0;
	max_speed_ = 10;
}

//Création du destructeur
Character::~Character() {
} //Rien a mettre dedans

//Accesseur (=getter function) en lecture simple

void Character::Accelerate(){
  if (speed_< max_speed_){
    speed_=speed_+1;
  }
}

void Character::Break(){
  if (speed_>0){
	speed_=speed_-1;
  }
}
