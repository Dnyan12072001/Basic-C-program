#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n>0)
    {
       int last_no = n*10 + last_no;
       n=n/10;

    }
    cout<<n;
}
