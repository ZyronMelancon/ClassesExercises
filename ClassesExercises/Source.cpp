#include<iostream>
#include<string>
#include<sstream>
#include "Zombies.h"
#include "Inventory.h"

using namespace std;



/* Functions for Zombie */
int Zombie::getAttack()
{
	return Zombie::attack;
}

int Zombie::getHealth()
{
	return Zombie::health;
}



/* Zombie sequence */
void zombieFight()
{
	Zombie zombie[4];

	for (int i = 0; i < 4; i++)
		zombie[i].setValues(100, rand() % 20 + 1);



	system("pause");
}

void main()
{

}