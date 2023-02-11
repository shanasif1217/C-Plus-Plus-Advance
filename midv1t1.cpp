#include<iostream>
using namespace std;
class Triangle {
private:
	double base;
	double height;
public:
	Triangle() {
		base = 0;
		height  = 0;
	}
	Triangle(double b, double h) {
		base = b;
		height = h;
	}
	void area() {
		cout << "Base  " << base << endl;
		cout << "Height  " << height << endl;
		cout << "Area  " << base * height << endl;
	}
};
int main() {
	cout << "For Object 1" << endl;
	Triangle t1(0, 0);
	t1.area();
	cout << "For Object 2" << endl;
	Triangle t2(5, 7.5);
	t2.area();
	return 0;
}