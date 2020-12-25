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
    map<int,int> mp; // prime->colour
    vector<int> ans;
    int c = 1;
    For(i, 0, n){ 
        int tmp;
        cin >> tmp;
        for(int j = 2; j*j <= tmp; j++){
            if(tmp % j == 0){
                if(mp.find(j) == mp.end()){
                    // cout << c << " ";
                    ans.pb(c);
                    mp[j] = c++;
                }
                else{
                    // cout << mp[j] << " ";
                    ans.pb(mp[j]);
                }
                break;
            }
        }
    }
    cout << mp.size() << '\n';
    print(ans);
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