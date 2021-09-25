#include <iostream>
#include"circle.h"

using namespace std;

int main()
{
   circle c;
   cout<<"area="<<c.get_area()<<"\n";
   cout<<"per..="<<c.get_perineter()<<"\n";
   circle c1;
   c1.set_redius(5);
   cout<<"redius="<<c1.get_redius()<<"\n";
   cout<<"area="<<c1.get_area()<<"\n";
   cout<<"per..="<<c1.get_perineter();
    return 0;
}
