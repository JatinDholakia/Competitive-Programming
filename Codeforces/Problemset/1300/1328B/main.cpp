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
    int n, k;
    cin >> n >> k;
    int idx = -1;
    ll s = 0;
    for(ll i = 1; i < n; i++){
        s = ((i)*(i+1))/2;
        if(s >= k){
            idx = i;
            break;
        }
    }
    int diff = s - k;
    int idx2 = idx - 1 - diff;
    vector<char> v(n, 'a');
    v[idx] = 'b';
    v[idx2] = 'b';
    for(auto it = v.rbegin(); it != v.rend(); it++){
        cout << *it;
    }
    cout << '\n';
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