#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int a, b, c;
    cin>>a>>b>>c;
    long long int ans = ceil(sqrt(a*a +(b-c)*(b-c)));
    cout<<ans<<endl;
}

int main(){
    int T;
    cin>>T;
    while(T--){
        solve();
    }
    return 0;
}