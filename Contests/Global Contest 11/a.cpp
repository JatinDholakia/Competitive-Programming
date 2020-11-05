#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> sum(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum[i] = a[i];
    }
    int s = accumulate(a.begin(),a.end(),0);
    if(s==0){
        cout<<"NO"<<endl;
        return;
    }
    for(int i=1;i<n;i++){
        if(sum[i] + sum[i-1]==0){
            bool ok = 0;
            for(int j=i+1;j<n;j++){
                if(sum[j]!=sum[i]){
                    ok =1;
                    swap(sum[j],sum[i]);
                    swap(a[j],a[i]);
                }
            }
            if(!ok){
                cout<<"NO"<<endl;
                return;
            }
        }
        sum[i] += sum[i-1];
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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