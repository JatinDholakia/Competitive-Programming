/* Hello 2021  */
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
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1'000'000'007;
const int INF = 2'000'000'000;

void solve() {
    int n;
    cin >> n;
    int ones = 0, twos = 0;
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        if(tmp == 1) ones++;
        else twos++;
    }
    int sum = ones + twos * 2;
    if(sum % 2 == 1){
        cout << "NO\n";
        return;
    }
    sum /= 2;
    if(sum % 2 == 1 && ones == 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
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