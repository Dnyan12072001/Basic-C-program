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

    int counter=0;
    while(counter<n)
    {
        for(int i=0;i<n-counter-1;i++)
        {
            if(aray[i]>aray[i+1])
            {
                int temp = aray[i];
                aray[i]=aray[i+1];
                aray[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<aray[i]<<" ";
    }
}
