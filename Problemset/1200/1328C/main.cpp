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
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a = "1",b = "1";
    bool flag = 0;
    For(i,1,n){
        if(flag){
            a += '0';
            b += s[i];
        }
        else if(s[i]=='1'){
            a += '1';
            b += '0';
            flag = 1;
        }
        else{
            a += (s[i]=='2')?'1':'0';
            b += (s[i]=='2')?'1':'0';
        }
    }
    cout<<a<<'\n'<<b<<'\n';
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