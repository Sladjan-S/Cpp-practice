#include <iostream>

using namespace std;

class Box 
{
  public:
      double length;
      double breadth;
      double height;
};

int main()
{
    Box box1;
    Box box2;
    double volume = 0.0;

    //b1 spec
    box1.height = 5.0;
    box1.breadth = 7.0;
    box1.length = 6.0;
    
    //b2 spec
    box2.height = 10.0;
    box2.length = 12.0;
    box2.breadth = 13.0;

    //volumes
    volume = box1.height * box1.length * box1.breadth;
    cout<<"Volume of 1st box: "<<volume<<endl;

    volume = box2.height * box2.length * box2.breadth;
     cout<<"Volume on 2nd box: "<<volume<<endl;

    return 0;

}