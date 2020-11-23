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
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    ll s = 0;
    bool flag = 1;
    For(i,0,n){
        cin>>v[i];
        if(v[i]%x != 0) flag = 0;
        s += v[i];
    }
    if(s%x != 0) {
        cout<<n<<'\n';
        return;
    }
    if(flag){
       cout<<-1<<'\n';
       return;
    }
    int l = 0, r = n-1;
    For(i,l,n){
        if(v[i]%x != 0){
            l = i;
            break;
        }
    }
    for(int i=r;i>=0;i--){
        if(v[i]%x != 0){
            r = i;
            break;
        }
    }
    cout<<n-min(l+1,n-r)<<'\n';
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