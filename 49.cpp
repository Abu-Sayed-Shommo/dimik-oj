#include<bits/stdc++.h>
using namespace std;
#define Shommo ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    Shommo;
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i,cnt=0;
        cin>>n;
        if(n<2)
        {
            cout<<n<<" not a prime"<<endl;
        }
        else if(n==2)
        {
            cout<<n<<" is a prime"<<endl;
        }
        else
        {
            for(i=2; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    cnt++;
                }
            }
            if(cnt==0)
            {
                cout<<n<<" is a prime"<<endl;
            }
            else
            {
                cout<<n<<" is not a prime"<<endl;
            }
        }

    }
}

