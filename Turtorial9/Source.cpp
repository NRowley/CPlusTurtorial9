#include <iostream>
#include <string>
using namespace std;

class Dog {
public:

	Dog();
	string name;
	int age;
	float health;

	void bark() {
		cout << "woof \n";
	}

};

struct Cat {
	Cat();
	string name;
	int age;
	float health;

	void Meow();
};

int main() {
	Dog Halen;
	Dog Bowie;

	cout << Halen.name << endl;
	cout << Halen.age << endl;
	cout << Halen.health << endl;

	Halen.name = "Halen";
	Halen.age = 6;

	cout << Halen.name << endl;
	cout << Halen.age << endl;
	cout << Halen.health << endl;

	Cat cat;
	
	system("pause");
}

Dog::Dog() {
	bark();
	name = "default";
	age = 5;
	health = 100.f;
}

Cat::Cat() {
	cout << "Meow!" << endl;
	name = "Kit";
	health = 100.f;
	age = 100;
	Meow();
}

void Cat::Meow() {
	cout << "My age is: " << age << endl;
}