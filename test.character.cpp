#include <iostream>
#include "Character.h"
#include "Mario.h"
#include "Yoshi.h"
#include "vector"
using namespace std;

int main (){
//Création d'un objet avec notre constructeur et réalisation de test
	/*Character*V1 = new Character;
	Character*V2 = new Character;
	std::cout << "tout fonctionne avec inline" << endl;
	V1->Accelerate();
	std::cout << "Speed V1 :" << V1->speed() << endl;
	V1->Break();
	std::cout << "Speed V1 :" << V1->speed() << endl;
	V2->Accelerate();
	std::cout << "Speed V2 :" << V2->speed() << endl;*/
	//delete V2;
	//En ajoutant une fonction membre virtuelle, ma classe character est devenu
	//une classe abstraite donc je ne peux plus en creer d'objet
	//Je commente donc mes tests de la partie 1 du projet

	vector<Character*> pilotes;
	pilotes.push_back(new Mario());
	for (int i = 0; i < 2; ++i)
	{
		pilotes.push_back(new Yoshi(i));
	}

	for (int i = 0; i < 3; ++i)
	{
		std::cout << "Le pilote " << i << " est un " << pilotes[i]->WhatAmI() << endl;
	}

	 for (int i : {0, 1, 2})
	{
		pilotes[i]->Accelerate();
	}

	std::cout << "Vitesse de Mario : " << pilotes[0]->speed() << endl;
	std::cout << "Vitesse de Yoshi 1 : " << pilotes[1]->speed() << endl;
	std::cout << "Vitesse de Yoshi 2 : " << pilotes[2]->speed() << endl;

}
