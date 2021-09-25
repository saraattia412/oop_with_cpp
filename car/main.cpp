#include <iostream>
#include"car.h"
#include<string>

using namespace std;

int main()
{
    car c1;
    c1.setmaker("sara atia");
    c1.setyearmodel(2020);
    cout<<"maker->"<<c1.getmaker()<<"\n";
    cout<<c1.getyearmodel();
    return 0;
}
