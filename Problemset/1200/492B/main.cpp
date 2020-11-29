#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>

void solve() {
    int n,l;
    cin>>n>>l;
    cout<<fixed<<setprecision(9);
    vector<int> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    double max_diff = v[0];
    For(i,1,n){
        max_diff = max(max_diff,(v[i]-v[i-1])/2.0);
    }
    max_diff = max(max_diff,(double) (l-v[n-1]));
    cout<<max_diff<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}