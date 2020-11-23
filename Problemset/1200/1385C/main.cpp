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
    int ans1 = 0, ans2 = 0;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]) {
            ans1 = i+1;
            break;
        }
    }
    bool flag = 0;
    for(int i=n-2;i>=0;i--){
        if(!flag && v[i]<v[i+1]) flag=1;
        else if(flag && v[i]>v[i+1]) {
            ans2 = i+1;
            break;
        }
    }
    // cout<<ans1<<" "<<ans2<<'\n';
    cout<<min(ans1,ans2)<<'\n';
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