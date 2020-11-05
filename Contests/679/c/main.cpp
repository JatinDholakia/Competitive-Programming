#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,x,n) for(int i=x;i<n;i++)

//=======================

void solve() {
    vector<int> a(6);
    for(i,0,6){
        cin>>a[i];
    }
    int n;
    cin>>n;
    vector<int> b(n);
    for(i,0,n){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    // sort(b.begin(),b.end());
    // int mx = b[n-1] - a[5]; //min val of max
    int mx = *max_element(b.begin(),b.end());
    mx -= a[5];
    int idx = max_element(b.begin(),b.end()) - b.begin();
    int diff = 0;
    int curr = INT_MAX;
    for(i,0,n-1){
        if(i!=idx){
        for(j,0,6){
            int curr1 = mx - (b[i] - a[j]);
            curr = min(curr1,curr);
            // if(curr<diff){
            //     diff = curr;
            // }
        }
        if(curr>diff){
            diff = curr;
        }
        }
    }
    cout<<diff<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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