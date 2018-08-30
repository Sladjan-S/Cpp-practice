#include <iostream>
using namespace std;

class Shape
{
    public:
        
        virtual int getArea() = 0;//interface declaration

        void setWidth(int w)
        {
            width = w;
        }

        void setheight(int h)
        {
            height = h;
        }

        protected:
            int width;
            int height;
};

//derived classes
class Rectangle : public Shape
{
    public:
        int getArea()
        {
            return (width * height);
        }
};

class Triangle : public Shape
{
    public:
        int getArea()
        {
            return (width * height)/2;
        }
};

int main(void)
{
    Rectangle rect;
    Triangle tri;

    rect.setWidth(5);
    rect.setheight(7);
    cout<<"Rect area: "<<rect.getArea()<<endl;

    tri.setWidth(5);
    tri.setheight(7);
    cout<<"Triangle area: "<<tri.getArea()<<endl;

    return 0;
}