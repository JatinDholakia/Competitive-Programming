#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(v) for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
//=======================

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> m;
    For(i,0,n){
        cin>>v[i];
        m[v[i]]++;
    }
    int nax = 0;
    for(auto x:m){
        nax = max(nax,x.second);
    }
    int x = m.size()-1;
    int y = nax;
    if(x>=y){
        cout<<y<<'\n';
    }
    else if(y-x==1){
        cout<<x<<'\n';
    }
    else{
        cout<<x+1<<'\n';
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
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}