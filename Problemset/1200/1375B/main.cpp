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

int n,m;
int neigh(int i, int j){
    return 4-(i==n||i==1)-(j==m||j==1);
}

void solve() {
    cin>>n>>m;
    int ans = 1;
    For(i,1,n+1){
        For(j,1,m+1){
            int tmp; cin>>tmp;
            if(tmp>neigh(i,j)){
                ans = 0;
            }
        }
    }
    if(ans<=0){
        cout<<"NO"<<'\n';
    }    
    else{
    cout<<"YES"<<'\n';
    For(i,1,n+1){
        For(j,1,m+1){
            cout<<neigh(i,j)<<" ";
        }
        cout<<'\n';
    }
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