#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>
//=======================
int cnt[100005],ans[100005];
void solve() {
int n,q,i,x,a[100005];
   cin>>n>>q;
    for(i=1;i<=n;i++) cin>>a[i];
    for(i=n;i>0;i--)
    {
        if(cnt[a[i]]==0) ans[i]=ans[i+1]+1,cnt[a[i]]++;
        else cnt[a[i]]++,ans[i]=ans[i+1];
        
    }
    while(q--)
    {
        cin>>x;
        cout<<ans[x]<<"\n";
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