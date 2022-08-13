#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1000000007;
const int INF = 2000000000;
const int base = 1000*1000*1000;


vector<int> readInput(string s) {
	vector<int> a;
	for (int i=(int)s.length(); i>0; i-=9) {
    if (i < 9)
        a.push_back (atoi (s.substr (0, i).c_str()));
    else
        a.push_back (atoi (s.substr (i-9, 9).c_str()));
	}
	return a;
}

string output(vector<int> a) {
	// printf ("%d", a.empty() ? 0 : a.back());
	// cout << (a.empty() ? 0 : a.back());
	string ans = "";
for (int i=(int)a.size()-1; i>=0; --i)
    // printf ("%09d", a[i]);
	ans += to_string(a[i]);
	return ans;
}

void subtract(vector<int> &a, vector<int> &b) {
	int carry = 0;
for (size_t i=0; i<b.size() || carry; ++i) {
    a[i] -= carry + (i < b.size() ? b[i] : 0);
    carry = a[i] < 0;
    if (carry)  a[i] += base;
}
while (a.size() > 1 && a.back() == 0)
    a.pop_back();
}

string getTarget(int x, int n) {
    string target;
    	if (x == 10) {
		target = string(n+1, '1');
	}else if (x == 11) {
	    target = string(n+1, '2');
	}else {
		target = string(n, x + '0');
	}
	return target;
}

void solve() {
	int n;
	string s;
	cin >> n;
	cin >> s;
	int x = (s[0] - '0' + 2);
	string target1 = getTarget(x, n);
	string target2 = getTarget(x-1, n);
	vector<int> a = readInput(s);
	vector<int> c = readInput(target1);
	vector<int> b = readInput(target2);
	subtract(c, a);
	subtract(b, a);
	string ans1 = output(b);
	string ans2 = output(c);
	if (ans1.size() == n){
		cout << ans1;
	} else {
		cout << ans2;
	}
	cout << '\n';
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