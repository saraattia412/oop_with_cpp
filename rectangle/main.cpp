#include <iostream>
#include"rectangle.h"

using namespace std;

int main()
{
    rectangle r1;
    r1.setlength(2);
    r1.setwidth(3);
    cout<<"length= "<<r1.getlength()<<"\n";
    cout<<"width= "<<r1.getwidth()<<"\n";
    cout<<"area= "<<r1.getarea();
    return 0;
}
