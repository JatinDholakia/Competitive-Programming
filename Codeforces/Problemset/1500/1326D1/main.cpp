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
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1'000'000'007;
const int INF = 2'000'000'000;

string s;
bool isPalindrome(int i, int j){
    while(i < j && s[i] == s[j]){
        i++;
        j--;
    }
    return i >= j;
}

void solve() {
    cin >> s;
    int n = s.size();
    int st = 0, end = n-1;
    while(st < end && s[st] == s[end]){
        st++;
        end--;
    }
    if(st >= end){
        cout << s << '\n';
        return;
    }
    int s1 = 1, s2 = 1;
    for(int j = end; j >= st; j--){
        if(isPalindrome(st, j)){
            s1 = j - st + 1;
            break;
        }
    }
    for(int i = st; i <= end; i++){
        if(isPalindrome(i, end)){
            s2 = end - i + 1;
            break;
        }
    }
    string ans = "";
    if(s1 >= s2){
        ans += s.substr(0, st + s1);
        ans += s.substr(end + 1, n);
    }
    else{
        ans += s.substr(0, st);
        ans += s.substr(end - s2 + 1, n);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}