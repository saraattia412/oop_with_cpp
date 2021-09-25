#include <iostream>

using namespace std;
class triangle
{
private:
    float base;
    float height;
public:
    void setbase_height(float b, float h)
    {

        base=b;
        height=h;
    }
    float  getbase()
    {
        return base ;

    }
    float getheight()
    {
        return height;
    }
    float getarea()
    {
        return .5*base*height;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    triangle  t1;
    t1.setbase_height(2,4);
    cout<<"base = "<<t1.getbase()<<endl;
    cout<<"height = "<<t1.getheight()<<endl;
    cout<<"area= "<<t1.getarea()<<endl;

    return 0;
}
