#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>

void solve() {
    int n;
    cin>>n;
    ll s = 0;
    vector<int> v(n);
    int tmp;
    cin>>tmp;
    For(i,0,n-1){
        int tmp1;
        cin>>tmp1;
        if((tmp1^tmp) < 0){
            s += tmp;
            tmp = tmp1;
        }
        else{
            tmp = max(tmp,tmp1);
        }
    }
    s += tmp;
    cout<<s<<'\n';

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