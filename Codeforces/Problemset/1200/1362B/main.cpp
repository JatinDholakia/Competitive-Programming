#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>
//=======================

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans = -1;
    For(i,1,1025){
        vector<int> tmp;
        For(j,0,n){
            tmp.pb(i^v[j]);
        }
        sort(tmp.begin(),tmp.end());
        bool same = 1;
        For(j,0,n){
            if(v[j] != tmp[j]) same = 0;
        }
        if(same){
            ans = i;
            break;
        }
    }
    cout<<ans<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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