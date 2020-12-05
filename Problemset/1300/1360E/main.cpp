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
    vector<vector<int>> a(n, vector<int> (n));
    For(i, 0, n){
        For(j, 0, n){
            char tmp;
            cin >> tmp;
            a[i][j] = tmp - '0';
        }
    }
   
    bool ans = 1;
    for (int i = n - 2; i >= 0; --i) {
      for (int j = n - 2; j >= 0; --j) {
        if (a[i][j] && !a[i + 1][j] && !a[i][j + 1]) {
          ans = false;
        }
      }
    }
    if(ans == 1){
        cout << "YES" <<'\n';
    }
    else{
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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