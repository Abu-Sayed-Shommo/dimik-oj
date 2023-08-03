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
        double n;
        cin>>n;
        double a=n-1;
        cout<<(int)log2(a)+1<<" days"<<endl;
    }
}
