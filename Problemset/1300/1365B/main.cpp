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
    vector<int> val(n);
    bool st = 1;
    For(i, 0, n){
        cin >> val[i];
        if(i && val[i] < val[i-1]) st = 0;
    }
    bool one_p = 0, zero_p = 0;
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        if(tmp == 1){
            one_p = 1;
        }
        else{
            zero_p = 1;
        }
    }
    if((one_p && zero_p) || st){
        cout << "YES" << '\n';
    }
    else{
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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