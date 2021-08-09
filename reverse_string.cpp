#include<iostream>
using namespace std;

void reverses(string s)
{
    if(s.length()==0)
    {
        return;
    }

    string ros = s.substr(1);
    reverses(ros);

    cout<<s[0]<<endl;
}

int main()
{
   string s;
   cin>>s;

   reverses(s);
    return 0;
}
