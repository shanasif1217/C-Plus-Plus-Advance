#include<iostream>
using namespace std;
class Calculator {
private:
	double num1;
	double num2;
public:
	Calculator() {
		num1 = 0;
		num2 = 0;
	}
	
	void add() {
		cout << "Enter first number:" << endl;
		cin >> num1;
		cout << "Enter second number:" << endl;
		cin >> num2;
		cout << "Addition of two numbers is:" << endl;
		cout << num1 + num2;
	}
	void sub() {
		cout << "Enter first number:" << endl;
		cin >> num1;
		cout << "Enter second number:" << endl;
		cin >> num2;
		cout << "Substraction of two numbers is : " << endl;
		cout << num1 - num2;
	}
	void multiply() {
		cout << "Enter first number:" << endl;
		cin >> num1;
		cout << "Enter second number:" << endl;
		cin >> num2;
		cout << "Multiplication of two numbers is:" << endl;
		cout << num1 * num2;
	}
	void divide() {
		cout << "Enter first number:" << endl;
		cin >> num1;
		cout << "Enter second number:" << endl;
		cin >> num2;
		cout << "Divison of two numbers is:" << endl;
		cout << num1 / num2;
	}
};
class Scientific : public Calculator {
private:
	double num1;
	double num2;
	double number1;
	double number2;
	double number3;
	double p;
public:
	Scientific() {
		number1 = 0;
		number2 = 0;
		number3 = 0;
		p = 1;
	}
	
	void square() {
		cout << "Enter number to square:" << endl;
		cin >> number1;
		cout << "Square of this number is:" << endl;
		cout << number1 * number1;
	}
	void power() {
		cout << "Enter the base number:" << endl;
		cin >> number2;
		cout << "Enter the Power number:" << endl;
		cin >> number3;
		cout << "Power of this number is:" << endl;
		for (int i = 0; i < number3; i++) {
			p = p * number2;
		}
		cout << p << endl;
	}
};
int main() {
	
	Calculator c;
	cout << "-----------For Calculator---------" << endl;
	cout << "Here is for addition:" << endl;
	c.add();
	cout << endl;
	cout << "Here is for substraction:" << endl;
	c.sub();
	cout << endl;
	cout << "Here is for multiplication:" << endl;
	c.multiply();
	cout << endl;
	cout << "Here is for Division:" << endl;
	c.divide();
	cout << endl;
	Scientific sc;
	cout << "-----------For Scientific Calculator---------" << endl;
	cout << "Here is for addition:" << endl;
	sc.add();
	cout << endl;
	cout << "Here is for substraction:" << endl;
	sc.sub();
	cout << endl;
	cout << "Here is for square:" << endl;
	sc.square();
	cout << endl;
	cout << "Here is for power:" << endl;
	sc.power();
	cout << endl;
	return 0;
}