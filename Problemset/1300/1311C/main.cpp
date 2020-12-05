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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<vector<int>> pref(26, vector<int> (n));
    vector<int> ans(26);
    For(i, 0, n){
        pref[s[i]-'a'][i] = 1;
        if(i){
            For(j, 0, 26){
                pref[j][i] += pref[j][i-1];
            }
        }
    }
    For(i, 0, m){
        int tmp;
        cin >> tmp;
        For(j, 0, 26){
            ans[j] += pref[j][tmp-1];
        }
    }
    For(i, 0, 26){
        ans[i] += pref[i][n-1];
    }
    print(ans);
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