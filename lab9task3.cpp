#include <iostream>
using namespace std;

//Person class
class Person {
private:
	char* name;
	int age;
public:
	Person(char* name, int age) {
		int len = 0;
		for (int i = 0; name[i] != '\0'; i++)
		{
			i++;
		}
		name = new char[len + 1];
		for (int i = 0; i < len; i++)
		{
			this->name = name;
		}
		name[len] = '\0';
		this->age = age;
	}
};

//Employee class
class Employee : public Person {
private:
	double salary;
	int employeeId;
public:
	Employee(char* name, int age, double salary, int employeeId)
		: Person(name, age) {
		this->salary = salary;
		this->employeeId = employeeId;
	}
};

//BaseballPlayer class
class BaseballPlayer : public Person {
private:
	double battingAverage;
	int totalRuns;
public:
	BaseballPlayer(char* name, int age, double battingAverage, int totalRuns)
		: Person(name, age) {
		this->battingAverage = battingAverage;
		this->totalRuns = totalRuns;
	}
};

//main function
int main() {
	//object of BaseballPlayer class
	BaseballPlayer b1("abcd", 20, 0.50, 100);

	//object of Employee class
	Employee e1("efgh", 25, 35000.00, 1234);

	//counting the number of BaseballPlayer and Employee
	int bpCount = 0;
	int empCount = 0;
	bpCount++;
	empCount++;

	//displaying the count
	cout << "Number of BaseballPlayers: " << bpCount << endl;
	cout << "Number of Employees: " << empCount << endl;
	return 0;
}