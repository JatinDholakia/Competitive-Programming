#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,x,n) for(int i=x;i<n;i++)
 
//=======================
 
void solve() {
    string s;
    cin>>s;
    int n = s.size();
    int dp[n+1] = {0};
    for(i,1,n+1){
        if(s[i-1]==s[i]) dp[i]++;
    }
    for(i,1,n+1){
        dp[i] += dp[i-1];
        // cout<<dp[i]<<" ";
    }
    // cout<<endl;
    int x;
    cin>>x;
    int l,r;
    for(i,0,x){
        cin>>l>>r;
        cout<<dp[r-1] - dp[l-1]<<endl;
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