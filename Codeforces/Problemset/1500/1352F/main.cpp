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
#define set(x) cout.precision(x);cout << fixed;
const int mod = 1'000'000'007;
const int INF = 2'000'000'000;

void solve() {
   int n0,n1,n2;
   cin>>n0>>n1>>n2;
   if(n0==0&&n1==0)
   {
      string ans(n2+1,'1');
      cout<<ans<<endl;
      return ;
   }
   if(n1==0&&n2==0)
   {
      string ans(n0+1,'0');
      cout<<ans<<endl;
      return ;
   }
   n1++;
   string ans="1";
    for(int i=0;i<n2;i++)
         ans += '1';
      if(n1>1)
      {
         ans.pb('0');
         for(int i=0;i<n0;i++)
            ans += '0';
         n1-=2;
         for(int i=0;i<n1;i++)
         {
            if(i%2)
            {
               ans += '0';
            }
            else
            {
               ans += '1';
            }
         }
      }
      cout<<ans<<endl;
 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
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