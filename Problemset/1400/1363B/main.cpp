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
    string s;
    cin >> s;
    int n = s.size();
    int ans = INT_MAX;
    int curr = 0;
    For(i, 0, n){
        if(s[i] == '1'){
            curr++;
        }
    }
    ans = min(ans, curr);
    curr = 0;
    For(i, 0, n){
        if(s[i] == '0'){
            curr++;
        }
    }
    ans = min(ans, curr);
    For(i, 0, n){
        int curr1 = 0;
        int curr2 = 0;
        For(j, 0, n){
            if(j < i && s[j] == '1') curr1++;
            else if(j >= i && s[j] == '0') curr1++;
            if(j < i && s[j] == '0') curr2++;
            else if(j >= i && s[j] == '1') curr2++;
        }
        ans = min(ans, min(curr1,curr2));
    }
    cout << ans << '\n';
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