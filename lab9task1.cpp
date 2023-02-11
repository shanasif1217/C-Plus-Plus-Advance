#include<iostream>
using namespace std;
// Class Shape
class Shape
{
protected:
	int width;
	int height;
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
};

// Class Rectangle inheriting class Shape
class Rectangle : public Shape
{
public:
	int getArea()
	{
		int area = (width * width * height);
		return area;
	}
};

int main(void)
{
	int width, height;

	Rectangle Rect;
	// Input from user
	cout << "Enter width of rectangle: ";
	cin >> width;
	cout << "Enter height of rectangle: ";
	cin >> height;

	// Set width and height of Rect
	Rect.setHeight(height);
	Rect.setWidth(width);
	cout << "Area is:" << endl;
	cout << Rect.getArea() << endl;
	return 0;
}