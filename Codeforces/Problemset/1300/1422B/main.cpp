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

int median(vector<int> tmp){
    sort(tmp.begin(), tmp.end());
    int s = tmp.size();
    if(s%2 == 1){
        return tmp[s/2];
    }
    else{
        return (tmp[s/2 - 1] + tmp[s/2])/2;
    }
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int> (m));
    For(i, 0, n){
        For(j, 0, m){
            cin>>a[i][j];
        }
    }
    ll ans = 0;
    int nlim, mlim;
    nlim = (n%2==1)?(n/2 + 1):(n/2);
    mlim = (m%2==1)?(m/2 + 1):(m/2);
    For(i, 0, nlim){
        For(j, 0, mlim){
            vector<int> tmp;
            tmp.pb(a[i][j]);
            if(i != n-1-i){
                tmp.pb(a[n-1-i][j]);
            }
            if(j != m-1-j){
                tmp.pb(a[i][m-1-j]);
            }
            if(i != n-1-i && j != m-1-j){
                tmp.pb(a[n-1-i][m-1-j]);
            }
            int md = median(tmp);
            int count = 0;
            For(k,0,tmp.size()){
                count += abs(md - tmp[k]);
            }  
            ans += count; 
        }
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