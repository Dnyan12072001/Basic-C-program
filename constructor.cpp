#include<iostream>
using namespace std;

class MyClass
{
    public:
    int a,b;
    MyClass(int x,int y)
    {
       a=x;
       b=y;
    }
    void print()
    {
        cout<<"a: "<<a;
        cout<<"\nb: "<<b;
    }
};

int main()
{
    MyClass n1(10,20);

    n1.print();


}
