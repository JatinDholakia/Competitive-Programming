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
    int n;
    cin >> n;
    map<int,int> st;
    vector<int> c;
    int cnt = 0, s = 0;
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        // cout << st.size() << '\n';
        if(tmp > 0){
            if(st.find(tmp) != st.end()){
                cout << -1 << '\n';
                return;
            }
            s += tmp;
            cnt++;
            st[tmp] = 1;
        }
        else{
            if(st.find(abs(tmp)) == st.end() || st[abs(tmp)] == -1){
                cout << -1 << '\n';
                return;
            }
            s += tmp;
            cnt++;
            // st.erase(abs(tmp));
            st[abs(tmp)] = -1;
            if(s == 0){
                c.pb(cnt);
                cnt = 0;
                st.clear();
            }
        }
    }
    if(s == 0){
        cout << c.size() << '\n';
        print(c);
    }
    else{
        cout << -1 << '\n';
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