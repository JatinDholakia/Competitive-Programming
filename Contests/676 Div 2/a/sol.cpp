#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
//=======================

int findX(int A, int B) 
{ 
    int j = 0, x = 0; 
  
    while (A || B) { 
  
        if ((A & 1) && (B & 1)) { 

            x += (1 << j); 
        } 

        A >>= 1; 
        B >>= 1; 
        j += 1; 
    } 
    return x; 
} 

void solve() {
    int a, b;
    cin>>a>>b;
    int x = findX(a,b);
    int ans = (a^x) + (b^x);
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}