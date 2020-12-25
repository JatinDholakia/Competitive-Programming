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
    pii curr = {0,0};
    set<pair<pii,pii>> mp;
    int ans = 0;
    int n = s.size();
    For(i, 0, n){
        pii start = curr;
        pii end;
        if(s[i] == 'N'){
            end = {curr.F,curr.S+1};
        }
        else if(s[i] == 'W'){
            end = {curr.F-1, curr.S};
        }
        else if(s[i] == 'E'){
            end = {curr.F + 1, curr.S};
        }
        else{
            end = {curr.F, curr.S - 1};
        }
        if(mp.find({start,end}) != mp.end() || mp.find({end,start}) != mp.end()){
            ans += 1;
        }
        else{
            ans += 5;
            mp.insert({start, end});
            mp.insert({end, start});
        }
        curr = end;
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