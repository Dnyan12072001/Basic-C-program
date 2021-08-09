
#include<iostream>
using namespace std;

class Parent1
{
public:

    void detail_par1()
    {
        cout<<"Parent class 1"<<endl;

    }
};
class Parent2
{
public:

    void detail_par2()
    {
        cout<<"Parent class 2"<<endl;

    }
};

class Child : public Parent1, public Parent2
{
public:

    void detail_child()
    {
        cout<<"Child class " <<endl;
    }
};

int main()
{
    Child c1;

    c1.detail_par1();
    c1.detail_par2();
    c1.detail_child();

    return 0;
}
