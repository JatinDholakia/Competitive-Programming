#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,x,n) for(int i=x;i<n;i++)
#define pii pair<int,int>
#define pb push_back

//=======================

void solve() {
    int n;
    cin>>n;
    char syb = '0';
    int sz = 0;
    set<int> m;
    vector<int> v;
    int price;
    int prev = 0;
    bool ok = 1;
    for(i,0,2*n){
        cin>>syb;
        if(syb == '+') {
            sz++;
            prev = 0;
        }
        else{
            cin>>price;
            if(sz>0){
                sz--;
            }
            else{
                ok = 0;
                // cout<<1<<endl;
                // cout<<"NO"<<endl;
                // break;
            }
            if(m.find(price) != m.end()){
                ok = 0;
                // cout<<2<<endl;
                // cout<<"NO"<<endl;
                // break;
            }
            else{
                m.insert(price);
            }
            if(price<prev){
                ok = 0;
                // cout<<3<<endl;
                // cout<<"NO"<<endl;
                // break;
            }
            else{
                prev = price;
                v.pb(price);
            }
        }
    }
    if(ok){
        cout<<"YES"<<endl;
        for(i,0,n){
            cout<<v[i]<<" ";
        }
    }
    else{
        cout<<"NO"<<endl;
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