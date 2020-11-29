#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) for(int i=0;i<vec.size();i++) {cout<<vec[i]<<" ";} cout<<'\n';
#define pii pair<int,int>
#define F first
#define S second

void solve() {
    int n;
    cin>>n;
    vector<bool> occ(n+1);
    bool opt = 1;
    int not_married = -1;
    For(i,0,n){
        int k;
        cin>>k;
        bool married = 0;
        For(j,0,k){
            int tmp;
            cin>>tmp;
            if(!occ[tmp] && !married){
                occ[tmp] = 1;
                married = 1;
            }
        }
        if(!married) {
            opt = 0;    
            not_married = i+1;
        }
    }
    if(opt){
        cout<<"OPTIMAL"<<'\n';
    }
    else{
        cout<<"IMPROVE"<<'\n';
        For(i,1,n+1){
            if(!occ[i]){
                cout<<not_married<<" "<<i<<'\n';
                break;
            }
        }
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