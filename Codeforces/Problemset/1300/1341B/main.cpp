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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    For(i, 0, n){
        cin >> v[i];
    }
    vector<int> peaks(n);
    For(i, 1, n-1){
        if(v[i] > v[i-1] && v[i] > v[i+1]){
            peaks[i] = 1;
        }
        peaks[i] += peaks[i-1];
    }
    peaks[n-1] = peaks[n-2];
    int max_peaks = 0;
    int l = 0;
    For(i, k-1, n){
        if(peaks[i-1]-peaks[i-k+1] > max_peaks){
            max_peaks = peaks[i-1]-peaks[i-k+1];
            l = i-k+1;
        }
    }
    cout << (max_peaks+1) << " " << (l+1) << '\n';

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