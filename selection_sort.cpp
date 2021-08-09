#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int aray[n];

    for(int i=0;i<=n;i++)
    {
        cin>>aray[i];
    }

    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
        {
            if(aray[j]<aray[i])
            {
                int temp = aray[j];
                aray[j]=aray[i];
                aray[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<aray[i]<<" ";
    }

}
