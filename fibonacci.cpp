
#include<iostream>
#include<math.h>
using namespace std;

void fib(int n)
{
    int num1= 1;
    int num2= 2;

    int next_num;

    for(int i=1;i<=n;i++)
    {
        cout<<num1<<endl;
        next_num= num1 + num2;
        num1 = num2;
        num2 = next_num;
    }

}


int main()
{
    int n;
    cin>>n;

    fib(n);

    return 0;
}
