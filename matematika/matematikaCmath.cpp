#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short s = 100;
    int i = -1000;
    long l = 10000;
    float f = 230.47;
    double d = 200.347;

    //operacije
    cout<<"sinus d: "<<sin(d)<<endl;
    cout<<"apsolutna vrednost i: "<<abs(i)<<endl;
    cout<<"donja vrednost d: "<<floor(d)<<endl;
    cout<<"sqrt od f: "<<sqrt(f)<<endl;
    cout<<"eksponent od d na 2: "<<pow(d, 2)<<endl;

    return 0;
}