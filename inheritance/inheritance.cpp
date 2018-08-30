#include <iostream>

using namespace std;


//+base class
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}

	void setHeight(int h)
	{
		height = h;
	}

protected:
	int width;
	int height;
};

//+derived class
class Rectangle : public Shape
{
public:
	int getArea()
	{
		return (width * height);
	}
};

//+main method,obviously
int main(void)
{
	Rectangle rect;

	rect.setWidth(5);
	rect.setHeight(7);

	cout<<"Total area of rectangle: "<<rect.getArea()<<endl;

	return 0;
}