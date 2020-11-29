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
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    if(A==0 && D == 0){
        if(B % 2 == 1){
            cout<<"Tidak Ya Tidak Tidak\n";
        } else {
            cout<<"Tidak Tidak Ya Tidak\n";
        }
    } else if(B == 0 && C == 0){
        if(A % 2 == 1){
            cout<<"Ya Tidak Tidak Tidak\n";
        } else {
            cout<<"Tidak Tidak Tidak Ya\n";
        }
    } else {
        if((A+B) % 2 == 1){
            cout<<"Ya Ya Tidak Tidak\n";
        } else{
            cout<<"Tidak Tidak Ya Ya\n";
        }
    }
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