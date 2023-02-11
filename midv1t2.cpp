#include<iostream>
using namespace std;
class Employee {
private:
	char* name;
	float salary;
	int age;
public:
	Employee() {
		name = nullptr;
		age = 0;
		salary = 0.0;
	}
	Employee(char* n, int a, float s) {
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++) {
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++) {
			name[i] = n[i];
		}
		name[length] = '\0';
		age = a;
		salary = s;
	}
	void setname(char* n) {
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++) {
			length++;
		}
		name = new char[length + 1];
		for (int i = 0; i < length; i++) {
			name[i] = n[i];
		}
		name[length] = '\0';
	}
	char* getname() {
		return name;
	}
	void setage(int a) {
		age = a;
	}
	int getage() {
		return age;
	}
	void setsalary(float s) {
		salary = s;
	}
	float getsalary() {
		return salary;
	}
	void increasesalary(int sala) {
		salary = salary + sala;
	}
	void display() {
		if (name != nullptr) {
			cout << "Name   " << name << endl;
			cout << "Age   " << age << endl;
			cout << "Salary   " << salary << endl;
		}
	}
	~Employee() {
		if (name != nullptr) {
			delete name;
			name = nullptr;
		}
	}
};
int main()
{
	cout << endl << "-----Question 2-----" << endl;
	Employee e1;
	char name[7] = { 'M','r',' ','O','O','P','\0' };
	int age = 88;
	float salary = 22500.2;
	Employee e2(name, age, salary);
	cout << "Name of e2 = " << e2.getname() << endl;
	name[0] = 'X';
	name[4] = 'W';
	name[5] = 'L';
	Employee e3 = e2;
	e3.increasesalary(10000.5);
	char name2[11] = { 'M','r',' ','A',' ','G','r','a','d','e','\0' };
	e3.setname(name2);
	e3.setage(20);
	cout << "Name of e3 = " << e3.getname() << endl;
	name2[0] = 'X';
	name2[3] = 'F';
	Employee e4;
	e4 = e3;
	cout << endl << "E1" << endl;
	e1.display();
	cout << endl << "E2" << endl;
	e2.display();
	cout << endl << "E3" << endl;
	e3.display();
	cout << endl << "E4" << endl;
	e4.display();
	cout << "--------------------" << endl << endl;
		return 0;
}