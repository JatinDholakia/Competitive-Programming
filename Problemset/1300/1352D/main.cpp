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
    vector<int> v(n);
    For(i, 0, n){
        cin >> v[i];
    }
    bool left_turn = 1;
    int curr = 0, l = 0, r = 0, moves = 0;
    int i = 0, j = n-1;
    while(i <= j){
        deb(curr);
        deb2(l, r);
        if(left_turn){
            curr += v[i];
            if(curr > r){
                l += curr;
                curr = 0;
                left_turn = 0;
                moves++;
            }
            i++;
        }
        else{
            curr += v[j];
            if(curr > l){
                r += curr;
                curr = 0;
                left_turn = 1;
                moves++;
            }
            j--;
        }
    }
    if(left_turn){
        l += curr;
    }
    else{
        r += curr;
    }
    cout << moves << " " << l << " " << r << '\n';
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