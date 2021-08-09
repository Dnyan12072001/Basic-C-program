#include<iostream>
using namespace std;

void sub_string(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros = s.substr(1);

    sub_string(ros, ans);
    sub_string(ros , ans + ch);
}
int main()
{
    sub_string("ABC","");
    cout<<endl;

    return 0;
}
