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
    vector<char> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    int ans = 0;
    bool clock = 1, ant_clock = 1;
    For(i,0,n){
        if(v[i] == '<'){
            clock = 0;
        }
        if(v[i] == '>'){
            ant_clock = 0;
        }
    }
    For(i,1,n+1){
        if(v[i%n] == '-' || v[(i-1)%n]=='-') ans++;
        else if(v[i%n] == '>' && v[(i-1)%n] == '>' && clock) ans++;
        else if(v[i%n] == '<' && v[(i-1)%n] == '<' && ant_clock) ans++;
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