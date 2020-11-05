#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

//=======================

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    // bool flag = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    // int x = v[0];
    // for(int i=1;i<n;i++){
    //     if(v[i] != x) flag = 1;
    // }
    // if(!flag){
    //     cout<<-1<<endl;
    //     return;
    // }
    int idx = max_element(v.begin(),v.end()) - v.begin();
    // deb(idx);
    bool ok = 0;
    for(int i = idx;i<n;i++){
        if(v[i] != v[idx]){
            ok = 1;
            cout<<i<<endl;
            return;
        }
    }
    for(int i=idx;i>=0;i--){
        if(v[i] != v[idx]){
            cout<<i+2<<endl;
            return;
        }
    }

    cout<<-1<<endl;
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