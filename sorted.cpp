#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }

    bool resarray = sorted(arr+1,n-1);
    return(arr[0]<arr[1] && resarray);
}
int main()
{
    int n;
    cin>>n;

    int arr[] = {1,2,3,4,5,6};

    cout<<sorted(arr,n);

}
