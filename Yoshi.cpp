#include "Yoshi.h"

//Consctructeur
Yoshi::Yoshi(int crests){
  crests_= crests;
};

//destructeur
Yoshi::~Yoshi(){
	std::cout << this->WhatAmI() << " " << this << " a été effacé" << std::endl;
}

//Methode WhatAmI
std::string Yoshi::WhatAmI() const{
  std::string name = "Yoshi avec ";
  std::string crests_number = std::to_string(crests_);
  std::string crests = " crêtes";
  return name+crests_number+crests;
}

//Methode Accelerate
//"A fit lizard accelerates faster than a fat plumber does"
void Yoshi::Accelerate(){
  if (speed_< max_speed_ and 2+speed_ <= max_speed_){
    speed_=speed_+2;
  }
}
