#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define pii pair<int,int>
#define F first
#define S second
const ll N = 1000006;
int a[N];
void solve() {
    int n, m;
    cin >> n >> m;
    for (int i=1; i<=n; i++){
		cin>>a[i];
	}
   	sort(a+1, a+n+1);
   	a[n+1]=INT_MAX;
   	for (int i=n/2+1; i<=n+1; i++){
   		int x=min(a[i+1]-a[i], m/(i-n/2));
		a[i]+=x; m-=x*(i-n/2);
		if(m<(i-n/2)){cout<<a[i]; return;}
	}
}   

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
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