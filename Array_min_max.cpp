#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int ary[n];

    for(int i=0;i<n;i++)
    {
        cin>>ary[i];
    }

    int max_no = INT_MIN;
    int min_no = INT_MAX;

    for(int i=0;i<n;i++)
    {
        max_no = max(max_no,ary[i]);
        min_no = min(min_no,ary[i]);

    }

    cout<<max_no<<"   "<<min_no<<endl;
}
