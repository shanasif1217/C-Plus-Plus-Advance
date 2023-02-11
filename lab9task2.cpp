#include <iostream>
using namespace std;

class BasicInfo {
protected:
	char name[50];
	int empId;
	char gender;
public:
	void getBasicInfo() {
		cout << "Enter Name : ";
		cin >> name;
		cout << "Enter Emp Id : ";
		cin >> empId;
		cout << "Enter Gender : ";
		cin >> gender;
	}
};

class DepartmentInfo {
protected:
	char deptName[50];
	char assignedWork[50];
	int time2complete;
public:
	void getDeptInfo() {
		cout << "Enter details now:" << endl;
		cout << "Enter Department Name : ";
		cin >> deptName;
		cout << "Enter Assigned Work : ";
		cin >> assignedWork;
		cout << "Enter Time To Complete : ";
		cin >> time2complete;
	}
};

class Employee :public BasicInfo, public DepartmentInfo {
public:
	void getEmployeeInfo() {
		getBasicInfo();
		getDeptInfo();
	}
	void printEmployeeInfo() {
		cout << "Name : " << name << endl;
		cout << "Emp Id : " << empId << endl;
		cout << "Gender : " << gender << endl;
		cout << "Department Name : " << deptName << endl;
		cout << "Assigned Work : " << assignedWork << endl;
		cout << "Time To Complete : " << time2complete << endl;
	}
};

int main() {
	Employee e;
	e.getEmployeeInfo();
	e.printEmployeeInfo();
	return 0;
}