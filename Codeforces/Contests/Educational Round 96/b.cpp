#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(k==0){
        cout<<v[n-1]-v[0]<<endl;
        return;
    }
    long long int ans = v[n-1];
    int i = n-2;
    while(i>=0 && k){
        ans += v[i];
        k--;
        i--;
    }
    cout<<ans<<endl;
}

int main()
 {
	int T;
    cin>>T;
    while(T--){
    	solve();
    }
	return 0;
}