#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

//=======================

void solve() {
    int n;
    cin>>n;
    int s = 10;
    int y = n%10;
    int x = 0;
    while(n){
        n /= 10;
        x++;
    }
    int ans = 0;
    ans  = 10*(y-1);
    // deb2(x,y);
    ans += (x*(x+1))/2;
    cout<<ans<<endl;
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