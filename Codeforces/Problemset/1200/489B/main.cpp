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
    int n,m;
    cin>>n;
    vector<int> boys(n);
    For(i,0,n){
        cin>>boys[i];
    }
    cin>>m;
    vector<int> girls(m);
    For(i,0,m){
        cin>>girls[i];
    }
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    int i = 0, j = 0;
    int count = 0;
    while(i<n && j<m){
        if(abs(boys[i]-girls[j]) <= 1){
            count++;
            i++;
            j++;
        }
        else if(boys[i] > girls[j]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<count<<'\n';
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