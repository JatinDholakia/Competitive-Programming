#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) For(i,0,vec.size()) cout<<vec[i]<<" ";
#define pii pair<int,int>
#define F first
#define S second

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> ans;
    int i = (n-1)/2;
    int j = i+1;
    ans.pb(v[i--]);
    bool flag = 1;
    while(ans.size()<n){
        if(flag && j<n){
            ans.pb(v[j++]);
        }
        else if(i>=0){
            ans.pb(v[i--]);
        }
        flag = !flag;
    }
    print(ans);
    cout<<'\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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