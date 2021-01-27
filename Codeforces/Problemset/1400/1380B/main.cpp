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

void solve() {
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    For(i, 0, s.size()){
        if(s[i] == 'R'){
            c++;
        }
        else if(s[i] == 'S'){
            a++;
        }
        else{
            b++;
        }
    }
    int mx = max(a,max(b,c));
    if(mx == a){
        cout << string(s.size(), 'R') << '\n';
    }
    else if(mx == b){
        cout << string(s.size(), 'S') << '\n';
    }
    else{
        cout << string(s.size(), 'P') << '\n';
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
    cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}