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
        int flag=1;
        int n;
        cin>>n;
        int arr[n];
        for(int i=1;i<=n;i++ )
        {
            cin>>arr[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(arr[i]==i)
            {
                flag =1;
            }
            else
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
