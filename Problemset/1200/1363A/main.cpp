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
    int n,k;
    cin>>n>>k;
    int s = 0;
    int odd_count = 0;
    int even_count = 0;
    For(i,0,n){
        int tmp;
        cin>>tmp;
        s+= tmp;
        if(tmp%2 == 1) {
            odd_count++;
        }
        else{
            even_count++;
        }
    }
    if((k==n && s%2==0) || odd_count == 0 || (even_count==0 && k%2==0)) cout<<"No"<<'\n';
    else{
        cout<<"Yes"<<'\n';
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