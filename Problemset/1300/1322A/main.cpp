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
    vector<int> v(n), sum(n);
    For(i, 0, n){
        char tmp;
        cin >> tmp;
        if(tmp == '('){
            v[i] = 1;
        }
        else{
            v[i] = -1;
        }
        sum[i] = v[i];
        if(i) sum[i] += sum[i-1];
    }
    if(sum[n-1] != 0){
        cout << -1 << '\n';
        return;
    }
    bool ok = 1;
    int prevZero = -1;
    int ans = 0;
    For(i, 0, n){
        if(sum[i] < 0){
            ok = 0;
        }
        if(sum[i] == 0 && !ok){
            ans += i-prevZero;
            ok = 1;
        }
        if(sum[i] == 0){
            prevZero = i;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
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