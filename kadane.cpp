#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int aray[n];
    for(int i=0;i<n;i++)
    {
        cin>>aray[i];
    }

    int currentSum = 0;
    int maxSum = 0;

    for(int i=0;i<n;i++)
    {
         maxSum+= aray[i];

        if(currentSum<0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
}
