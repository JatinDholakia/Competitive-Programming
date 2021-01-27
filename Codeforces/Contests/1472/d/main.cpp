/* Hello 2021  */
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

void solve() {
    int n;
    cin >> n;
    vector<int> even, odd;
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        if(tmp % 2 == 0) even.pb(tmp);
        else odd.pb(tmp);
    }
    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());
    int i = 0, j = 0;
    ll alice = 0, bob = 0;
    bool al = 1;
    while(i < even.size() || j < odd.size()){
        if(al){
            if(i >= even.size()){
                j++;
            }
            else if(j >= odd.size()){
                alice += even[i++];
            }
            else if(even[i] > odd[j]){
                alice += even[i++];
            }
            else{
                j++;
            }
        }
        else{
            if(i >= even.size()){
                bob += odd[j++];
            }
            else if(j >= odd.size()){
                i++;
            }
            else if(even[i] > odd[j]){
                i++;
            }
            else{
                bob += odd[j++];
            }
        }
        al = !al;
    }
    if(alice == bob){
        cout << "Tie\n";
    }
    else if(alice < bob){
        cout << "Bob\n";
    }
    else{
        cout << "Alice\n";
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