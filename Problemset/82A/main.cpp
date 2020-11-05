#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,n) for(int i=0;i<n;i++)

//=======================

void solve() {
    vector<string> v = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    queue<int> q;
    int n;
    cin>>n;
    if(n<=5){
        cout<<v[n-1]<<endl;
        return;
    }
    ll x = 5;
    ll s = x;
    while(s<=n){
        x *= 2;
        s += x;
    }
    s -= x;
    ll ind = x/5;
    int tmp = (n-s)/ind;
    cout<<v[tmp]<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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