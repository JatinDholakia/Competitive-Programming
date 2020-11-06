#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
#define pii pair<int,int>
//=======================

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    For(i,0,n){
        cin>>v[i];
    }
    unordered_multiset<int> even, odd;
    For(i,0,n){
        if(v[i]%2==0){
            even.insert(v[i]);
        }
        else{
            odd.insert(v[i]);
        }
    }
    if(even.size()%2==0 && odd.size()%2==0){
        cout<<"YES\n";
    }
    else if((even.size()%2) ^ (odd.size()%2)){
        cout<<"NO\n";
    }
    else{
        for(auto x:even){
            if(odd.find(x+1) != odd.end() || odd.find(x-1) != odd.end()){
                cout<<"YES\n";
                return;
            }
        }
        cout<<"NO\n";
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