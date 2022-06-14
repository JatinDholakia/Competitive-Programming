#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1000000007;
const int INF = 2000000000;

void solve() {
	int n;
	cin >> n;
	if (n == 1) {
		cout << 1 << '\n';
		return;
	}
	vector<int> a(n);
	int maxNum = 0;
	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	vector<int> arr1, arr2;
	arr1.push_back(-1);
	arr2.push_back(-1);
	bool b = false;
	for(int i = 0; i < n; i++) {
		if(b) {
			arr1.push_back(a[i]);
		} else {
			arr2.push_back(a[i]);
		}
		b = !b;
	}
	int ans1 = 0, ans2 = 0;
	for(int i = 1; i < arr1.size(); i++) {
		if (arr1[i] > arr1[i - 1])
			ans1++;
	}
	for(int i = 1; i < arr2.size(); i++) {
		if (arr2[i] > arr2[i - 1])
			ans2++;
	}
	cout << min(ans1, ans2) << '\n';
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