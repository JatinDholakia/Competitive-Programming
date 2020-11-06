#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define si(x)	scanf("%d",&x)
// #define sl(x)	scanf("%lld",&x)
// #define ss(s)	scanf("%s",s)
// #define pi(x)	printf("%d\n",x)
// #define pl(x)	printf("%lld\n",x)
// #define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
//=======================

void solve() {
    int n,q,tmp;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>tmp;
        // cout<<tmp<<endl;
        int ans = upper_bound(v.begin(),v.end(),tmp) - v.begin();
        // ans = ans==0?ans:ans+1;

        cout<<ans<<"\n";
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