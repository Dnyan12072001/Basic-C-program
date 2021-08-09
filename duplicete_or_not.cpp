#include<iostream>
using namespace std;

int duplicate_no(int arr[])
{
    for (int i=0;i<7;i++)
     {
         if(arr[i]==arr[i+1])
         {
             return i;
         }
         else
             return -1;
}


int main()
{

    int arr[]={1,2,3,3,4,4,5};


    cout<<duplicate_no(arr);

    return 0;

}
