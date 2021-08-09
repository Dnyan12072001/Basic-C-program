#include<iostream>
using namespace std;

void replace_pi(string s)
{
    if(s.length()==0)
    {
        return;
    }

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";

        replace_pi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replace_pi(s.substr(1));

    }
}
int main()
{
    string s;
    cin>>s;

    replace_pi(s);

}

/*pixxwewpicspiadapi
3.14xxwew3.14cs3.14ada3.14
Process returned 0 (0x0)   execution time : 22.137 s
Press any key to continue.*/
