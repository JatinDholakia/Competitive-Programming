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
    int change(int x){
        return (x+1)%9;
    }

    void solve() {
        for (int i = 0; i < 9; ++i) {
            string s;
            cin >> s;
            for (auto &c : s) if (c == '2') c = '1';
            cout << s << endl;
        }
    }

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
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