#include <iostream>
#include <string>

using namespace std;

class Creature {
public:
	Creature(string name) : CreatureName(name) {}
	virtual void DoAction() const = 0;
	virtual void DrawOnScreen() const {
		cout << "<" << CreatureName << ">" << " is ";
		DoAction();
	}

protected:
	string CreatureName;
};

class Player : public Creature {
public:
	Player(string name) : Creature(name) {}
	void DoAction() const { cout << "is attacking!!!" << endl; }
};

class Monster : public Creature {
public:
	Monster(string name) : Creature(name) {}
	virtual void DoAction() const { cout << "doing Monster Stuff!!!" << endl; }
};

class WildPig : public Monster {
public:
	WildPig(string name) : Monster(name) {}
	void DoAction() const { cout << "is runnig!!!" << endl; }
};

class Dragon : public Monster {
public:
	Dragon(string name) : Monster(name) {}
	void DoAction() const { cout << "breathing fire!!!" << endl; }
};

int main() {
	Player hero("Kick_Ass");
	WildPig pig("I'm_Hungry");
	Dragon drag("I'm_the_Boss");
	Monster mon("UFO");
	Creature* object[4];
	object[0] = &hero;
	object[1] = &pig;
	object[2] = &drag;
	object[3] = &mon;
	object[0]->DrawOnScreen();
	object[1]->DrawOnScreen();
	object[2]->DrawOnScreen();
	object[3]->DrawOnScreen();
	system("pause");
	return 0;
}