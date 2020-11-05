#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    char tmp;
    for(int i=0;i<n;i++){
        cin>>tmp;
        if(tmp=='L') v[i] = 0;
        else v[i] = 1;
    }
    
    
    int k1 = k;
    for(int i=1;i<n-1;i++){
        if(v[i-1] && v[i+1] && k1 && !v[i]){
            v[i] = 1;
            k1--;
        }
    }


    for(int i=1;i<n-1;i++){
        if((v[i-1]^v[i+1]) && k1 && !v[i]){
            v[i] = 1;
            k1--;
        }
    }
    int i = 0;
    while(k1 && i<n){
        if(!v[i]){
            v[i] = 1;
            k1--;
        }
        i++;
    }
    int ans1 = 0;
    if(v[0]) ans1++;
    for(int i=1;i<n;i++){
        if(v[i-1] && v[i]) ans1 += 2;
        else if(!v[i-1] && v[i]) ans1++;
    }
    // for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<ans1<<endl;
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