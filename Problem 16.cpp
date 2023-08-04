#include <bits/stdc++.h>
using namespace std;
#define Shommo ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
int main()
{
    Shommo;
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string tmp;
        for (auto ch:s) {
            if (ch != ' ') {
                tmp.push_back(ch);
            }
            else {
                reverse(tmp.begin(), tmp.end());
                cout << tmp<<" ";
                tmp = "";
            }
        }
        reverse(tmp.begin(), tmp.end());
        cout << tmp <<endl;
    }
}
