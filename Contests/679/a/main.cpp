#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,x,n) for(int i=x;i<n;i++)

//=======================

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(i,0,n){
        cin>>v[i];
    }
    int i = 0;
    int j = n-1;
    vector<int> ans(n);
    while(i<j){
        ans[i] = -v[j];
        ans[j] = v[i];
        i++;
        j--;
    }
    for(i,0,n){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
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