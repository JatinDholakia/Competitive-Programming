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

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    int mx = 0;
    for(char i = '0'; i <= '9'; i++){
        for(char j = '0'; j <= '9'; j++){
            bool first = 1;
            int curr = 0;
            For(k, 0, n){
                if(first && s[k] == i){
                    curr++;
                    first = !first;
                }
                else if(!first && s[k] == j){
                    curr++;
                    first = !first;
                }
            }
            if(i != j) 
                curr -= (curr & 1);
            mx = max(mx, curr);
        }
    }
    cout << (n - mx) << '\n';
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