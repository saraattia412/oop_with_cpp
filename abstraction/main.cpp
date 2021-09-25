#include <iostream>

using namespace std;

class Shape
{
protected:
    int width;
    int height;
public:

    virtual int get_Area() = 0;
    void set_Width(int w)
    {
        width = w;
    }

    void set_Height(int h)
    {
        height = h;
    }


};


class Rectangle: public Shape
{
public:
    int get_Area()
    {
        return (width * height);
    }
};
class Triangle: public Shape
{
    public:
    int get_Area()
    {
        return (width * height)/2;
    }
};

int main()
{
    Rectangle Rect_1;
    Triangle Tri_1;
    Rect_1.set_Width(2);
    Rect_1.set_Height(3);
    cout << " Rectangle area= " << Rect_1.get_Area() << endl;
    Tri_1.set_Width(2);
    Tri_1.set_Height(3);
    cout << " Triangle area= " << Tri_1.get_Area() << endl;


    return 0;
}
