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

bool isPrime(int x){
    for(int i = 2; i < min(x, (int)5e4); i++){
        if(x % i == 0)
            return 0;
    }
    return 1;
}

void solve() {
    int n;
    cin >> n;
    vector<string> ans = {"Ashishgup\n", "FastestFinger\n"};
    if(n == 1){
        cout << ans[1];
        return;
    }
    if(n > 2 && n % 2 == 0){
        if((n & (n-1)) == 0)
            cout << ans[1];
        
        else if(n % 4 != 0 && isPrime(n / 2))
            cout << ans[1];
        else{
            cout << ans[0];
        }
    }
    else{
        cout << ans[0];
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