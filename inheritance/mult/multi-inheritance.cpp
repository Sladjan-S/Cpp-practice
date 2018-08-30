#include <iostream>

using namespace std;

class Shape
{
    public:
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

class PaintCost
{
    public:
    int getCost(int area)
    {
        return area * 70;
    }
};

class Rectangle : public Shape, public PaintCost
{
    public:
    int getArea()
    {
        return(width * height);
    };
};

  int main(void)
    {
        Rectangle rect;
        int area;

        rect.setWidth(5);
        rect.setheight(7);

        area = rect.getArea();
        cout<<"Area to paint: "<<rect.getArea()<<endl;
        cout<<"Painting expenses for this area: "<<rect.getCost(area)<<endl;

        return 0;
    }