#include<iostream>
using namespace std;

void decrising(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    decrising(n-1);
}
int main()
{
    int n;
    cin>>n;

    decrising(n);
}
