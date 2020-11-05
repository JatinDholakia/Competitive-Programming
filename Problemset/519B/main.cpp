#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define fo(i,n) for(int i=0;i<n;i++)

//=======================

void solve() {
    int n;
    cin>>n;
    unordered_map<int,int> m1,m2;
    int tmp;
    fo(i,n){
        cin>>tmp;
        m1[tmp]++;
    }
    fo(i,n)
    int tmp;
    fo(i,n-1){
        cin>>tmp;
        m2[tmp]++;
        m1[tmp]--;
    }
    for(auto x:m1){
        if(x.second>0) cout<<x.first<<endl;
    }
    fo(i,n-2){
        cin>>tmp;
        m2[tmp]--;
    }
    for(auto x:m2){
        if(x.second>0) cout<<x.first<<endl;
    }
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