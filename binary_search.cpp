#include<iostream>
using namespace std;

int binary_search(int aray[],int n,int key)
{
    int start=0;
    int endb=n;

    while(start<=endb)
    {
        int mid=(start+endb)/2;

        if(aray[mid]==key)
        {
            return mid;
        }
        else if(aray[mid]>key)
        {
            endb=mid-1;
        }
        else
        {
             start=mid+1;
        }
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;

    int aray[n];

    for(int i=0;i<=n;i++)
    {
        cin>>aray[i];
    }

    int key;
    cin>>key;

    cout<<binary_search(aray,n,key);
}
