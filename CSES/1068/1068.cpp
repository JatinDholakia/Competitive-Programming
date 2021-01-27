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
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1'000'000'007;
const int INF = 2'000'000'000;

signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll n; cin >> n;
    while (n != 1)
    {
        cout << n << ' ';
        if (n&1) n = n*3 + 1;
        else n /= 2;
    }
    cout << "1\n";
    return 0;
}