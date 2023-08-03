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
        int a,b,i,n,cnt=0,sum=0;
        cin>>a>>b;
        {
            if(a == 1) a++;

            for(n=a; n<=b; n++)
            {
                int f = 0;
                for(i=2; i*i <= n; i++)
                {
                    if(n%i==0)
                    {
                        f = 1;
                        break;
                    }
                }
                if(f==0)
                {
                    sum++;
                }
            }
        }
        cout<<sum<<endl;
    }
}
