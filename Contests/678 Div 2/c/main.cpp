#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,x,n) for(int i=x;i<n;i++)
int mod = 1e9 + 7;
//=======================

long long int fact(int n){
    long long int ans = 1;
    for(i,1,n){
        ans = ((ans%mod)*(i%mod))%mod;
    }
    return ans;
}

void solve() {
    
    int n,x,pos;
    cin>>n>>x>>pos;
    int l = 0, r = 0;
    vector<int> v(n);
    for(i,0,n){
        v[i] = i;
    }
    int left = 0;
    int right = v.size();
    int middle;
    while(left<right){
        middle = (left+right)/2;
        // cout<<middle<<" ";
        if(v[middle] <= pos){
            left = middle+1;
            l++;
        }
        else {
            right = middle;
            if(right-left != 1)
            r++;
        }
    }
    long long int ans = 1;
    for(i,1,l+1){
        ans *= (x-1-(l-i));
        ans = ans%mod;
    }
    for(i,1,r+1){
        ans *= (n-x-(r-i));
        ans = ans % mod;
    }
    ll f = fact(n-(l+r+1));
    ans = ((ans%mod)*(f%mod))%mod;
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
    // cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}