#include <bits/stdc++.h>
using namespace std;

int count(vector<int> arr){
    sort(arr.begin(),arr.end());
    int mid = arr.size()/2;
    long long int ans1 = 0,ans2 = 0;
    for(int i=0;i<arr.size();i++){
        ans1 += abs(arr[mid] - arr[i]);
        ans2 += abs(arr[mid-1] - arr[i]);
    }
    return min(ans1,ans2);
}

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    vector<int> temp1(n);
    vector<int> temp2(m);
    long long int ans = 0;
    if(n==1 && m==1){
        cout<<0<<endl;
        return;
    }
    if(n==1){
        for(int i=0;i<m;i++){
            cin>>temp2[i];
        }
        ans += count(temp2);
        cout<<ans<<endl;
        return;
    }
    if(m==1){
        for(int i=0;i<n;i++){
            cin>>temp1[i];
        }
        ans += count(temp1);
        cout<<ans<<endl;
        return;
    }
    
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<int> arr(4);
    for(int i=0;i<n/2;i++){
        for(int j=0;j<m/2;j++){
            arr[0] = v[i][j];
            arr[1] = v[n-1-i][j];
            arr[2] = v[i][m-1-j];
            arr[3] = v[n-1-i][m-1-j];
            ans += count(arr);
        }
    }
    vector<int> middle1,middle2;
    if(n%2 != 0){
        for(int j=0;j<m;j++){
            if(m%2 != 0 && j==m/2) continue;
            middle1.push_back(v[n/2][j]);
        }
        ans += count(middle1);
    }
    if(m%2 != 0){
        for(int i=0;i<n;i++){
            if(n%2 != 0 && i==n/2) continue;
            middle2.push_back(v[i][m/2]);
        }
        ans += count(middle2);
    }
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