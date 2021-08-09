#include<iostream>
using namespace std;

int sum_no(int n)
{
    while(n==0)
    {
       return 0;
    }
     int previous_sum=sum_no(n-1);
     return n+previous_sum;
}
int main()
{
    int n;
    cin>>n;

    cout<<sum_no(n)<<endl;

}

