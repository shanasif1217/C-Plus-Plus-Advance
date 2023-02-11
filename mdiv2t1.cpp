#include<iostream>
using namespace std;
class Circle {
private:
	float radius;
	const double pi = 3.14286;
public:
	Circle() {
		radius = 0;
	}
	Circle(float r){
		radius = r;
	}
	void area() {
		cout << "Area   " << (radius * radius) * pi;
	}
	void display() {
		cout << "Radius    " << radius << endl;
		cout << "Pi    " << pi << endl;
	}
};
int main()
{
	cout << endl << "-----Question 1-----" << endl;
	Circle c1;
	c1.display();
	
	c1.area();
	Circle c2(10.2);
	c2.display();
	
	c2.area();
	cout << "--------------------" << endl << endl;
	return 0;
}
