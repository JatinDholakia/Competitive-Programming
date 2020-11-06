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
    vector<int> same,other;
    int tmp,tmp1;
    cin>>n;
    cin>>tmp;
    same.pb(1);
    For(i,0,n-1){
        cin>>tmp1;
        if(tmp1==tmp)same.pb(i+2);
        else other.pb(i+2);
    }
    if(other.size()==0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";  
    For(i,0,other.size()){
        cout<<1<<" "<<other[i]<<'\n';
    }
    For(i,1,same.size()){
        cout<<other[0]<<" "<<same[i]<<'\n';
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