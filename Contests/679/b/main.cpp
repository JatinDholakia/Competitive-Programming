#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define for(i,x,n) for(int i=x;i<n;i++)

//=======================

void solve() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>> rows(n,vector<int>(m));
    vector<vector<int>> cols(m,vector<int>(n));
    // map<int,int> m_r,m_c;
    for(i,0,n){
        for(j,0,m){
            cin>>rows[i][j];
            // m_c[rows[i][j]] = j; 
        }
    }
    for(i,0,m){
        for(j,0,n){
            cin>>cols[i][j];
            // m_r[cols[i][j]] = i;
        }
    }
    // vector<vector<int>> ans;
    vector<int> order(n);
    int x = cols[0][0];
    int col_no = 0;
    for(i,0,n){
        for(j,0,m){
            if(rows[i][j]==x){
                col_no = j;
            }
        }
    }
    for(i,0,n){
        x = cols[0][i];
        // deb(x);
        for(j,0,n){
            if(rows[j][col_no] == x){
                order[i] = j;
            }
        }
    }
    // for(i,0,n) {cout<<order[i]<<" ";}
    // cout<<endl;
    for(i,0,n){
        for(j,0,m){
            cout<<rows[order[i]][j]<<" ";
        }
        cout<<"\n";
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