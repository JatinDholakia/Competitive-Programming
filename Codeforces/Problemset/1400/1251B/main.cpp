#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define pii pair<int,int>
#define F first
#define S second

void solve() {
    int n;
    cin >> n;
    int zero = 0, one = 0;
    bool f = true;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        int st = count(s.begin(), s.end(), '0');
        zero += st;
        one += s.size() - st;
        if (s.size() % 2)
            f = false;
    }
    if (f && (zero % 2 || one % 2))
    {
        cout << n - 1;
    }
    else
    {
        cout << n;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}