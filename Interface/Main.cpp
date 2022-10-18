#include"Animal.h"
using namespace std;

int main()
{
	Animal *ptr = new Parrot("Ara", 2, "Africa");
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Fly();
	p->Print();
	delete ptr;
	cout << endl;

	Animal *ptr2 = new Cat("Lisa", 6, "Everywhere");
	ptr2->Eat();
	ptr2->Move();
	Cat* p2 = static_cast<Cat*>(ptr2);
	p2->Print();
	delete ptr2;
	cout << endl;

	Animal* ptr3 = new Dog("Sharik", 15, "Everywhere");
	ptr3->Eat();
	ptr3->Move();
	Dog* p3 = static_cast<Dog*>(ptr3);
	p3->Print();
	delete ptr3;
	cout << endl;

	Animal* ptr4 = new Penguin("Kovalski", 30, "Antarctica");
	ptr4->Eat();
	ptr4->Move();
	Penguin* p4 = static_cast<Penguin*>(ptr4);
	p4->Swim();
	p4->Print();
	delete ptr4;
	cout << endl;

	Animal* ptr5 = new Dolphin("Berni", 250, "Ocean");
	ptr5->Eat();
	ptr5->Move();
	Dolphin* p5 = static_cast<Dolphin*>(ptr5);
	p5->Swim();
	p5->Print();
	delete ptr5;
}