#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

//=======================

void solve() {
    int f,n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int x = v[0];
    f=1;
    vector<int> same;
    for(int i=1;i<n;i++){
        if(v[i]==x) {
            f++;
            same.push_back(i+1);
        }
    }
    if(n-f<f-1){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<"\n";
    vector<int> other;
    for(int i=0;i<n;i++){
        if(v[i] != x){
            other.push_back(i+1);
            cout<<1<<" "<<i+1<<"\n";
        }
    }
    for(int i=0;i<same.size();i++){
        cout<<other[i]<<" "<<same[i]<<"\n";
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