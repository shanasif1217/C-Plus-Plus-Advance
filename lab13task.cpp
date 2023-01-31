#include<iostream>
using namespace std;
class Animal {
protected:
	int legs;
public:
	Animal() {
		legs = 0;
	}
	Animal(int l) {
		legs = l;
	}
	virtual void walk() = 0; 
	virtual void eat() = 0;

};
class Spider:public Animal {
public:
	
	Spider(int l) {
		legs = l;
	}
	void eat() {
		cout << "Animal is walking with" << legs << "legs." << endl;
	}
};
class Pet {
protected:
	char* name;
public:
	void setname(char* n) {
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++)
		{
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			name[i] = n[i];
		}
	}
	char* getname() {
		return name;
	}
	virtual void play() = 0;

	
};
class Cat :public Animal, public Pet {
public:
	Cat() {

	}
	Cat(char*n) {
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++)
		{
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			name[i] = n[i];
		}
	};
	void play() {
		cout << name << "is playing." << endl;
	}
	void eat() {
		cout << name << "is eating." << endl;
	}
};
class Fish : public Animal, public Pet {
	Fish() {

	}
	Fish(const char* n) {
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++)
		{
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++)
		{
			name[i] = n[i];
		}
	}
	void play() {
		cout << name << "is playing." << endl;
	}
	void eat() {
		cout << name << "is eating." << endl;
	}
	void walk() {
		cout << name << "is waling with" << legs << "legs." << endl;
	}
};
int main() {
	
	
		Fish* f = new Fish("Jaws");
		//Cat* c = new Cat("Meow");
		Animal* a = new Fish("Fish");
		Animal* e = new Spider();
		Pet* p = new Cat("Garfield");
		f->play();
		c->play();
		e->eat();
		e->walk();
		a->walk();
		p->play();
		return 0;

	}