#include <string>
#include <iostream>
#include "Character.h"

class Yoshi: public Character{
  public:
    //Le constructeurs
    Yoshi(int crests);
    //"each Yoshi can have a different number of crests"

    //destructeur
    virtual ~Yoshi();

    //Methodes
    virtual std::string WhatAmI() const;
    virtual void Accelerate();

    inline int crests() const
		{
			return crests_;
		};

  protected:
    int crests_;


};
