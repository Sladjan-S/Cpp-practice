#include <iostream>
using namespace std;

//function declaration
void func(void);

static int count = 10;/* global var*/

int main()
{
while(count--) {
    func();
}
return 0;
}

void func(void){
    static int i = 5;//local
    i++;
    std::cout<<"i is "<<i;
    std::cout<<" and count is "<<count<<std::endl;
}