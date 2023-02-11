#include<iostream>
using namespace std;
//Person class
class Person
{
private:
   const  char* name;
    int age;

public:
    Person(const char* name, int age)
    {
       
            this->name = name;
        
    }
    
    
};

//Employee class
class Employee : public Person
{
private:
    double salary;
    int employeeId;

public:
    Employee(char* name, int age, double salary, int employeeId) :
        Person(name, age)
    {
        this->salary = salary;
        this->employeeId = employeeId;
    }
    
	
};


class BaseballPlayer : public Person
{
private:
    double battingAverage;
    int totalRuns;

public:
    BaseballPlayer(char* name, int age, double battingAverage, int totalRuns) :
        Person(name, age)
    {
        this->battingAverage = battingAverage;
        this->totalRuns = totalRuns;
    }
};

int main()
{
    BaseballPlayer bp("John", 24, 0.304, 200);
    Employee e("Joseph", 30, 70000, 1234);

    int numEmployees = 0;
    int numBaseballPlayers = 0;

    numEmployees++;
    numBaseballPlayers++;

    cout << "Number of Employees: " << numEmployees << endl;
    cout << "Number of Baseball Players: " << numBaseballPlayers << endl;
    
    return 0;
}
