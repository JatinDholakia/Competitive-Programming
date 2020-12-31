#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define pii pair<int,int>
#define F first
#define S second

void solve() {
    int n;
    cin >> n;
    vector<string> p(n);
    vector<bool> vis(10);
    For(i, 0, n){
        cin >> p[i];
    }
    int c = 0;
    For(i, 0, n){
        int x = p[i][3] - '0';
        vis[x] = 1;
    }
    For(i, 0, n){
        // bool found = 0;
        For(j, 0, n){
            if(i != j && p[i] == p[j]){
                // found = 1;
                int x = p[j][3] - '0';
                vis[x] = 1;
                x = p[i][3] - '0';
                x++;
                while(vis[x % 10] == 1) x++;
                c++;
                char tmp = x % 10 + '0';
                p[i][3] = tmp;
                vis[x % 10] = 1;
            }
        }
        // if(!found){
        //     int x = p[i][3] - '0';
        //     vis[x] = 1;
        // }
    }
    cout << c << '\n';
    For(i, 0, n){
        cout << p[i] << '\n';
    }
}   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
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