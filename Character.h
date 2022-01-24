// Création d'une classe appelée Character
#ifndef Character__
#define Character__

#include <string>
#include <iostream>

class Character{
// Déclaration de 2 attributs speed_ et max_speed_ de type protected
protected:
	float speed_ ;
	float max_speed_ ;
  //int foo_ const;

//Déclaration  des fonctions
public:
	//Constructeur
	Character();
  // Destructeur
  virtual ~Character();

	//Fonction
  virtual void Accelerate();
  virtual void Break ();


	//Virtual function member
	virtual std::string WhatAmI() const = 0;
//Permet de vérifier à la compilation, s'il y a des classes
//fille qui utilise cette fonction et ne sont pas virtuelle

	//Accesseurs (=getter function)
	/*inline*/
	inline float speed() const;
};

inline float Character::speed() const {
	return speed_;
};
#endif
