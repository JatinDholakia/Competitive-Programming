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
    vector<int> nums(n);
    vector<int> used(2*n+1);
    For(i,0,n){
        int tmp;
        cin>>tmp;
        nums[i] = tmp;
        used[tmp] = 1;
    }
    bool ok = 1;
    vector<int> ans;
    For(i,0,n){
        int tmp = nums[i];
        ans.pb(tmp);
        bool found = 0;
        For(j,tmp,2*n+1){
            if(used[j] == 0){
                found = 1;
                used[j] = 1;
                ans.pb(j);
                break;
            }
        }
        ok &= found;
    }
    if(!ok){
        cout<<-1<<'\n';
    }
    else{
        print(ans);
    }
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