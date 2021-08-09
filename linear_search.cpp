#include<iostream>
#include<climits>
using namespace std;

int linear_search(int aray[],int n,int key)
{
     for(int i=0;i<n;i++)
    {
        if(aray[i]==key)
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}


int main()
{
    int n;
    cin>>n;

    int aray[n];

    for(int i=0;i<n;i++)
    {
        cin>>aray[i];
    }

    int key;
    cin>>key;


    cout<<linear_search(aray,n,key);


}
