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
    string s;
    cin>>s;
    bool flag = 0;
    For(i,1,n){
        if(s[i] < s[i-1])
            flag = 1;
    }        
    if(!flag){
        cout<<s<<'\n';
    }
    else{
        string ans = "";
        For(i,0,n){
            if(s[i]=='1') break;
            else
                ans+='0';
        }
        ans += '0';
        for(int i=n-1;i>=0;i--){
            if(s[i]=='0') break;
            else
                ans+='1';
        }
        cout<<ans<<'\n';
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