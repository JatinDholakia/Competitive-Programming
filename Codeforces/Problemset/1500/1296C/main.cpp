#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i, x, n) for (int i = x; i < n; i++)
#define pb push_back
#define print(vec)                                   \
    For(i, 0, vec.size()) { cout << vec[i] << " "; } \
    cout << '\n';
#define pii pair<int, int>
#define F first
#define S second
#define set(x)         \
    cout.precision(x); \
    cout << fixed;
const int mod = 1'000'000'007;
const int INF = 2'000'000'000;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<pii, int> mp;
    pii curr = {0, 0};
    mp[curr] = 0;
    pii ans = {-1, -1};
    int ansLen = INT_MAX;
    For(i, 0, n)
    {
        if (s[i] == 'L')
        {
            curr.F += -1;
        }
        else if (s[i] == 'R')
        {
            curr.F += 1;
        }
        else if (s[i] == 'U')
        {
            curr.S += 1;
        }
        else
        {
            curr.S += -1;
        }
        if (mp.find(curr) != mp.end() && i - mp[curr] + 1 < ansLen)
        {
            ansLen = i - mp[curr] + 1;
            ans = {mp[curr], i};
        }
        mp[curr] = i;
    }
    if (ansLen == INT_MAX)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans.F + 1 << " " << ans.S + 1 << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt","w",stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}