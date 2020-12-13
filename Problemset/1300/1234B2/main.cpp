#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define For(i,x,n) for(int i=x;i<n;i++)
#define pb push_back
#define print(vec) For(i,0,vec.size()) {cout<<vec[i]<<" ";} cout<<'\n';
#define pii pair<int,int>
#define F first
#define S second

void solve() {
    int n, k;
    cin >> n >> k;
    deque<int> q;
    set<int> st;
    For(i, 0, n){
        int tmp;
        cin >> tmp;
        if(st.find(tmp) != st.end()) continue;
        else if(q.size() < k){
            q.push_back(tmp);
            st.insert(tmp);
        }
        else{
            st.erase(q.front());
            q.pop_front();
            q.push_back(tmp);
            st.insert(tmp);
        }
    }
    cout << q.size() << '\n';
    while(!q.empty()){
        cout << q.back() << " ";
        q.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t = 1;
    // cin >> t;
    while(t--) {
      solve();
    }
    return 0;
}