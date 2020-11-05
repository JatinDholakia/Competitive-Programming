#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> v {
        {0,0},
        {2,0},
        {0,1},
        {1,0},
        {3,0},
        {0,0},
        {2,0},
        {0,1},
        {2,1},
        {3,0}
    };
    if(n==1 || n==2 || n==4){
        cout<<-1<<endl;
        return;
    }
    if(n==8){
        cout<<1<<" "<<1<<" "<<0<<endl;
        return;
    }
    int dec = n%10;
    int x = v[dec][0];
    int z = v[dec][1];
    int y = (n - (3*x) - (7*z));
    assert(y%5==0);
    y /= 5;
    cout<<x<<" "<<y<<" "<<z<<endl;
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