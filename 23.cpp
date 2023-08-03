#include <bits/stdc++.h>
using namespace std;
#define Shommo ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    Shommo;
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string s;
        cin>>s;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]>='a'&&s[i]<='z')
            {
                cout<<(int)s[i]-96;
            }
            else
            {
                cout<<(int)s[i]-64;
            }

        }
        cout<<endl;
    }
}

