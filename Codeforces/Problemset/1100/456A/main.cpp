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
    vector<pii> v(n);
    int x,y;
    For(i,0,n){
        cin>>x>>y;
        v[i] = {x,y};
    }
    sort(v.begin(),v.end());
    int prev = v[0].second;
    For(i,1,v.size()){
        if(v[i].second<prev){
            cout<<"Happy Alex";
            return;
        }
        prev = v[i].second;
    }
    cout<<"Poor Alex";
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