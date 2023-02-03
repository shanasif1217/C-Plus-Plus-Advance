#include<iostream>
using namespace std;
class Address {
public:
	int s_no;
	int h_no;
	char* h_name;

	Address() {
		

		}
	Address(int s, int h, char*n) {
		s_no = s;
		h_no = h;
		int length = 0;
		for (int i = 0; n[i] != '\0'; i++) {
			length++;
		}
		h_name = new char[length + 1];
		for (int i = 0; i < length; i++) {
			h_name[i] = n[i];
		}
		h_name[length] = '\0';
		s_no = s;
		h_no = h;
	}
};
class Employee {
private:
	double salary;
	int age;
	double years;
	Address* address;
public:
	Employee() {

	}
	Employee(double s, int a, double y,  Address *address) {
		this-> salary = s;
		this-> age = a;
		this-> years = y;
		this-> address = address;
	}
	void display() {
		cout << "Here is are the details of Employee" << endl;
		cout << "Salray" << endl << salary << endl;
		cout << "Age" << endl << age << endl;
		cout << "Years" << endl << years << endl;
		cout << "Here is the Address" << endl;
		cout << "House no" << endl << address->h_no << endl;
		cout << "Stree no" << endl << address->s_no << endl;
		cout << "House name" << endl << address->h_name << endl;
	}
};
int main() {
	int street;
	int house;
	char* housename;
	housename = new char[100];
	int age;
	double salary;
	double year;
	cout << "Enter Street no" << endl;
	cin >> street;
	cout << "Enter House no" << endl;
	cin >> house;
	cout << "Enter House name" << endl;
	cin >> housename;
	cout << "Enter Employee age" << endl;
	cin >> age;
	cout << "Enter Employee Salary" << endl;
	cin >> salary;
	cout << "Enter Service years" << endl;
	cin >> year;
	Address a1(street, house, housename);
	Employee e1(salary, age, year, &a1);
	e1.display();
	return 0;
}