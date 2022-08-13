#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1000000007;
const int INF = 2000000000;

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> nums(n);
	int sum = 0;
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	x = sum - x;
    int l = 0, r = 0, res = INT_MAX, sz = nums.size();
    while (l <= r)
        if (sum >= x) {
            if (sum == x)
                res = min(res, l + sz - r);
            if (r < sz)
                sum -= nums[r++];
            else
                break;
        }
        else
            sum += nums[l++];
    cout << (res == INT_MAX ? -1 : res) << '\n';
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
	#endif
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}