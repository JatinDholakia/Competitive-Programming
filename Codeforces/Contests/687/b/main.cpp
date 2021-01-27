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
    vector<int> v(n);
    unordered_map<int,int> mp;
    For(i,0,n){
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<int> max_freqs;
    int max_freq = 0;
    for(auto x : mp){
        max_freq = max(max_freq,x.S);
    }
    for(auto x : mp){
        // if(x.S == max_freq){
            max_freqs.pb(x.F);
        // }
    }
    int ans = INT_MAX;
    For(i,0,max_freqs.size()){
        int j = 0;
        int count = 0;
        while(j < n){
            if(v[j] == max_freqs[i]){
                j++;
            }
            else{
                count++;
                j += k;
            }
        } 
        ans = min(ans, count);
    }
    cout << ans << '\n';
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