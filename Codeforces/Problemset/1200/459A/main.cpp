#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>
#define F first
#define S second

void solve() {
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    vector<pii> v;
    v.pb({x1,y1});
    v.pb({x2,y2});
    sort(v.begin(),v.end());
    if(v[0].F==v[1].F){
        int l = v[1].S - v[0].S;
        cout<<(v[0].F+l)<<" "<<v[0].S<<" "<<(v[1].F+l)<<" "<<v[1].S<<'\n';
    }
    else if(v[0].S == v[1].S){
        int l = v[1].F - v[0].F;
        cout<<(v[0].F)<<" "<<(v[0].S+l)<<" "<<v[1].F<<" "<<(v[1].S+l)<<'\n';
    }
    else if((v[1].F-v[0].F) != (v[1].S - v[0].S)){
        cout<<-1<<'\n';
    }
    else{
        int l = v[1].F - v[0].F;
        cout<<v[0].F<<" "<<(v[0].S+l)<<" "<<(v[0].F+l)<<" "<<v[0].S<<'\n';
    }
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