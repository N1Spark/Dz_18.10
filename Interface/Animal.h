#pragma once
#include<iostream>
#include"MyInterface.h"
using namespace std;

class Animal: public IAnimal // реализация интерфеса
{
protected:
	string name;
	double kg;
	string continent;
public:
	Animal() = default;
	Animal(string n, double k, string cont)
	{
		name = n;
		kg = k;
		continent = cont;
	}
	virtual void Print()
	{
		cout << "Name: " << name << endl;
		cout << "KG: " << kg << endl;
		cout << "Continent: " << continent << endl;
	}
	//virtual void Eat() = 0;
	//virtual void Move() = 0;	
};

class Parrot : public Animal,public IFly // наследование 
{
public:
	Parrot() = default;
	Parrot(string n, double k, string cont) :Animal(n, k, cont) {}

	// ----- реализация ИНТЕРФЕЙСА IANIMAL !!!

	virtual void Eat()
	{
		cout << "Parrots eat: grain, carrot, tomato\n";
	}
	virtual void Move()
	{
		cout << "Parrots move: 5 km/h\n";
	}
	// ----- реализация ИНТЕРФЕЙСА IFLY !!!
	virtual void Fly()
	{
		cout << "Parrots fly: 120 km/h\n";
	}

};

class Cat : public Animal
{
public:
	Cat() = default;
	Cat(string n, double k, string cont) : Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Cats eat: Whiskas\n";
	}

	virtual void Move()
	{
		cout << "Cats move: 44 km/h\n";
	}
};

class Dog : public Animal
{
public:
	Dog() = default;
	Dog(string n, double k, string cont) : Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Dogs eat: meat, fish, porridge\n";
	}

	virtual void Move()
	{
		cout << "Dogs move: 35 km/h\n";
	}
};

class Penguin : public Animal, public ISwim
{
public:
	Penguin() = default;
	Penguin(string n, double k, string cont) : Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Penguins eat: fish\n";
	}

	virtual void Move()
	{
		cout << "Penguins move: 10 km/h\n";
	}

	virtual void Swim()
	{
		cout << "Penguins swim: 35 km/h\n";
	}
};

class Dolphin : public Animal, public ISwim
{
public:
	Dolphin() = default;
	Dolphin(string n, double k, string cont) : Animal(n, k, cont) {}
	virtual void Eat()
	{
		cout << "Dolphins eat: fish\n";
	}

	virtual void Move()
	{
		cout << "Dolphins can't move\n";
	}

	virtual void Swim()
	{
		cout << "Dolphins swim: 60 km/h\n";
	}
};