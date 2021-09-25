#include <iostream>
#include<string>
#include<cstring>
using namespace std;

int main()
{
    int arr[5]= {0,1,2,3,4};
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<endl;

    }
    cout<<"-------------------------------------------------------"<<endl;
    int x[5]= {1};
    for(int i=0; i<5; i++)
    {
        cout<<x[i]<<endl;

    }
    cout<<"-------------------------------------------------------"<<endl;
    int y[5];
    for(int i=0; i<5; i++)
    {
        cout<<"enter value number :"<< i<<endl;

        cin>>y[i];
    }
    cout<<"----"<<endl;

    for(int i=0; i<5; i++)

    {
        cout<<"index = "<<i<<endl;
        cout<<y[i]<<endl;

    }

    cout<<"-------------------------------------------------------"<<endl;

    int array_[5];
    for(int i=0; i<5; i++)
    {
        cout<<"enter value number :"<< i<<endl;

        cin>>array_[i];
    }
    cout<<"----"<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<array_[i]<<endl;

    }
    int sum=0 ;
    for(int i=0; i<5; i++)
    {
        sum=sum+array_[i];
    }
    cout<<"sum= "<<sum<<endl;
    cout<<"-------------------------------------------------------"<<endl;

    int array_1[5];
    for(int i=0; i<5; i++)
    {
        cout<<"enter value number :"<< i<<endl;

        cin>>array_1[i];
    }
    cout<<"----"<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<array_1[i]<<endl;

    }
    int mul=1 ;
    for(int i=0; i<5; i++)
    {
        mul=mul+array_1[i];
    }
    cout<<"mul= "<<mul<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    char a[]="sara";
    char b[]="atia";
    char c[]="aboyosef";

    strcat(a,b);
    cout<<strcmp(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    char arr_3[]="1111111111111111111111111111111111111111111111111111111111";
    cout<<strlen(arr_3)<<endl;
    cout<<"-------------------------------------------------------"<<endl;


    return 0;
}
