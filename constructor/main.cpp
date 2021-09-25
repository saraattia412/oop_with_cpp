#include <iostream>

using namespace std;
class triangle
{
private:
    float base;
    float height;
public:
    triangle()//empty constructor
    {
        cout<<"first construcor "<<endl;
        base=5;
        height=10;
    }
    triangle(int b,int h)
    {
        cout<<"p constructor"<<endl;
        base=b;
        height=h;

    }

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
        return (.5*base*height);
    }
};

int main()
{
    cout << "Hello world!" << endl;
    triangle t;
    cout<<"base = "<<t.getbase()<<endl;
    cout<<"height = "<<t.getheight()<<endl;
    cout<<"area= "<<t.getarea()<<endl;
    triangle t1;
    t1.setbase_height(2,4);
    cout<<"base = "<<t1.getbase()<<endl;
    cout<<"height = "<<t1.getheight()<<endl;
    cout<<"area= "<<t1.getarea()<<endl;
    triangle t2(4,8);
    cout<<"base = "<<t2.getbase()<<endl;
    cout<<"height = "<<t2.getheight()<<endl;
    cout<<"area= "<<t2.getarea()<<endl;


    return 0;
}
