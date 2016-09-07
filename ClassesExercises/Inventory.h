#ifndef _INVENTORY_H_
#define _INVENTORY_H_

class Item
{
private:
	string name;
	float weight;
	bool stackable;
	int stack;
public:
	string getName()
	{
		return name;
	}
	float getWeight()
	{
		return weight;
	}
	bool isStackable()
	{
		return stackable;
	}
	int getStack()
	{
		return stack;
	}
};

class Inventory
{
private:
	Item items[16];
	int numItems;
public:
	Item listItems()
	{
		for (; numItems >=0; numItems--)
		{
			cout << "Name: " << items[numItems].getName() << " Weight: " << items[numItems].getWeight() << " Amount: " << items[numItems].getStack() << endl;
		}
	}
	bool addItem(Item &item)
	{
		if (numItems > 5)
			return false;
		else
			items[numItems] = item;
		numItems++;
	}
};
#endif