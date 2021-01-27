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
    vector<int> rem;
    For(i, 2, n){
        string tmp = s.substr(i-2, 3);
        string tmp1;
        if(i < n - 2){
            tmp1 = s.substr(i, 3);
        }
        if(tmp == "one" || tmp == "two"){
            if(tmp == "two" && tmp1 == "one"){
                s[i] = 'x';
                rem.pb(i+1);
            }
            else{
                s[i-1] = 'x';
                rem.pb(i);
            }
        }
    }
    // cout << s << '\n';
    cout << rem.size() << '\n';
    print(rem);
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