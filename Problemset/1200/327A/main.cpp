#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>

void solve() {
    int n;
    cin>>n;
    vector<int> bits(n+1);
    int ans = 0;
    int ones_count = 0;
    For(i,1,n+1){
        cin>>bits[i];
        if(bits[i]==1) ones_count++;
        bits[i] = bits[i]==0?max((bits[i-1]+1),1):max((bits[i-1]-1),-1);
        ans = max(ans,bits[i]);
    }
    if(ones_count != n){
        cout<<(ones_count+ans)<<'\n';
    }
    else{
        cout<<(ones_count-1)<<'\n';
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