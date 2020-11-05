#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int carry = n;
    int curr = n-1;
    cout<<2<<endl;
    while(curr>=1){
        cout<<curr<<" "<<carry<<endl;
        carry = ceil((carry+curr)/2.0);
        curr--;
    }
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