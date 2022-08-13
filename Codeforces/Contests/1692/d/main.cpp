#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1000000007;
const int INF = 2000000000;

bool isPalindrome(string& s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			return false;
		}
	}
	return true;
}

int toTime(string& s) {
	int hour = stoi(s.substr(0, 2));
	int min = stoi(s.substr(3, 2));
	return hour * 60 + min;
}

string toTimeString(int time) {
	time %= 1440;
	return to_string(time / 60) + ":" + to_string(time % 60);
}

void solve() {
	string start;
	int gap;
	cin >> start;
	cin >> gap;
	int startTime = toTime(start);
	set<string> st;
	st.insert(start);
	for (int i = startTime; i < startTime + 2880; i += gap) {
		st.insert(toTimeString(i));
	}
	int ans = 0;
	for (string s : st) {
		if (isPalindrome(s)) {
			ans++;
		}
	}
	cout << ans << '\n';
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