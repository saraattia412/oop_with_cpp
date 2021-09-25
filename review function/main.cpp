#include <iostream>

using namespace std;
int add(int a,int b)
{
    cout<<"enter two number: "<<endl;
    cin>>a>>b;
    return a+b;
}
double average(double m1,double m2,double m3)
{
    cout<<"enter three numbers :"<<endl;
    cin>>m1>>m2>>m3;
    return (m1+m2+m3)/3;
}
int maxmum(int n1,int n2,int n3)
{
    int m=n1;
    if(m<n2)
        m=n2;
    if(m<n3)
        m=n3;
    return m;
}
void p()
{
    cout<<"my name is sara atia "<<endl;
}
int mul(int h,int g)
{
    cout<<"enter numbers :"<<endl;
    cin>>h>>g;
    return h*g;
}
void ref_(int&w,int&q)
{
    cout<<"enter number :"<<endl;
    cin>>w>>q;
    w += 1;
    q += 1;
}
int main()
{
     int x,y;
     cout<<"enter x : ";
     cin>>x ;
     cout<<"enter y : ";
     cin>>y ;
     cout<<"x+y= "<<x+y<<endl;
     cout<<"-----------------------------------------------"<<endl;
     int a,b;
     cout<<"a+b= "<<add(a,b)<<endl;
     cout<<"-------------------------------------------------"<<endl;
     double m1,m2,m3;
     cout<<"enter three numbers :"<<endl;
     cin>>m1>>m2>>m3;
     cout<<"average = "<<(m1+m2+m3)/3<<endl;
     cout<<"--------------------------------------------------"<<endl;

     cout<<"avr..= "<<average(m1,m2,m3)<<endl;
     cout<<"---------------------------------------------------"<<endl;
     cout<<"maxmum value is :"<<maxmum(100,200,300)<<endl;

     cout<<"---------------------------------------------------"<<endl;
     p();
     cout<<"---------------------------------------------------"<<endl;
     int h,g;
     cout<<"h*g= "<<mul(h,g)<<endl;
     cout<<"---------------------------------------------------"<<endl;
     int w,q;
     ref_(w,q);
     cout<<"w= "<<w<<endl;
     cout<<"q= "<<q<<endl;
     cout<<"---------------------------------------------------"<<endl;









    return 0;
}
