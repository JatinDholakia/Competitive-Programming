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
    int n;
    cin>>n;
    int x = 0,y = 0;
    bool ans = 1;
    For(i,0,n){
        int xtmp,ytmp;
        cin>>xtmp>>ytmp;
        if(xtmp<x || ytmp<y || (ytmp-y) > (xtmp-x)){
            ans = 0;
        }
        x = xtmp;
        y = ytmp;
    }
    cout<<((ans)?"YES":"NO")<<'\n';
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