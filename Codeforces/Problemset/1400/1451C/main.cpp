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
    int n, k;
    cin >> n >> k;
    string a, b;
    cin >> a >> b;
    vector<int> c1(26), c2(26);
    For(i, 0, n){
        c1[a[i]-'a']++;
        c2[b[i]-'a']++;
    }
    int c = 0;
    bool ok = 1;
    For(i, 0, 26){
        if(c2[i] > c1[i]){
            if(c < c2[i] - c1[i] || (c2[i] - c1[i]) % k != 0) ok = 0;
            else{
                c -= c2[i] - c1[i];
            }
        }
        else if(c2[i] < c1[i]){
            c += k*((c1[i] - c2[i])/k);
        }
    }
    if(ok){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
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