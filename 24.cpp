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
        int n;
        cin>>n;
        long long arr[n+10];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<arr[0];
        for(int i=2;i<n;i=i+2)
        {
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
}
