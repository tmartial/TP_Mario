#include <string>
#include <iostream>
#include "Character.h"

class Mario: public Character{
  public:
    //Le constructeurs
    Mario();

    //destructeur
    virtual ~Mario();

    //Methodes
    virtual std::string WhatAmI() const;


};
