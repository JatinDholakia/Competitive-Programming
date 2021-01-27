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
    for(i,0,n){
        for(j,0,n){
            if((i==0&&j==0) || (i==n-1 && j==n-1)){
                cout<<1<<" ";
            }
            else if(j==i-1 || j==i+1){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<"\n";
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
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}