#include<iostream>
using namespace std;
class Shape{
protected:
	double length;
	double width;
	double radius;
public:
	Shape(){

	}
	virtual void area() = 0;
};
class Triangle : public Shape{
public:
	Triangle(double l, double w){
		length = l;
		width = w;

	}
	void area(){
		cout << "Area of Triangle is:" << endl;
		cout << 0.5 * length * width;
	}
};
class Square : public Shape{
public:
	Square(double l){
		length = l;
	}
	void area(){
		cout << "Area of square is:" << endl;
		cout << length * length;
	}
};
class Rectangle : public Shape{
public:
	Rectangle(double l, double w){
		length = l;
		width = w;
	}
	void area(){
		cout << "Area of Rectangle is:" << endl;
		cout << length * width;
	}
};
class Circle : public Shape{
public:
	Circle(double r){
		radius = r;
	}
	void area(){
		cout << "Area of Circle is:" << endl;
		cout << 3.14 * (radius * radius);
	}
};
int main(){
	double radius;
	double length;
	double width;
	cout << "Enter Radius" << endl;
	cin >> radius;
	cout << "Enter Length" << endl;
	cin >> length;
	cout << "Enter Width" << endl;
	cin >> width;
	Triangle t1(length, width);
	Square s1(length);
	Rectangle r1(length, width);
	Circle c1(radius);
	t1.area();
	cout << endl;
	s1.area();
	cout << endl;
	r1.area();
	cout << endl;
	c1.area();
	cout << endl;
	system("pause");
	return 0;
}