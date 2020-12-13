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
const int maxn = 100010;
int c[maxn];

void solve() {
    int n; cin >> n;
	int cnt_2 = 0, cnt_4 = 0;
	for(int i = 1; i <= n; ++i){
		int x; cin >> x;
		++c[x];
		if(c[x] % 2 == 0) ++cnt_2;
		if(c[x] % 4 == 0) ++cnt_4;
	}
	//printf("%d %d\n", cnt_2, cnt_4);
 
	int q; cin >> q;
	for(int i = 1; i <= q; ++i){
		char ch; int x; 
		cin >> ch >> x;
		if(ch == '+'){
			++c[x];
			if(c[x] % 2 == 0) ++cnt_2;
			if(c[x] % 4 == 0) ++cnt_4;
		}
		else{
			if(c[x] % 2 == 0) --cnt_2;
			if(c[x] % 4 == 0) --cnt_4;
			--c[x];
		}
        if(cnt_4 > 0 && cnt_2 - 2 >= 2){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }
		// printf("%s\n", cnt_4 > 0 && cnt_2 - 2 >= 2 ? "YES" : "NO");
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