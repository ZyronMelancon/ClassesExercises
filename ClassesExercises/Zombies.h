#ifndef _ZOMBIES_H_
#define _ZOMBIES_H_

//Exercise 1 example

/*class Zombie
{
private:
	int health;
	int attack;
string prevOcc;

public:
	int getHealth()
	{
		return health;
	}
	int getAttack()
	{
		return attack;
	}
string getPrevOcc()
	{
		return prevOcc;
	}
	void setValues(int h, int a, string p)
	{
		health = h;
		attack = a;
	}
};*/

class Zombie
{
public:
	int health;
	int attack;

	int getHealth();
	int getAttack();
	void setValues(int h, int a)
	{
		health = h;
		attack = a;
	}
};
#endif