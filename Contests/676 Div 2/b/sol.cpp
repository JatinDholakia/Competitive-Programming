#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
//=======================

void solve() {
    int N;
    cin>>N;
    int a,b;
    int x,y;
    char tmp;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin>>tmp;
            if(i==0 && j==1){
                a = tmp - '0';
            }
            else if(i==1 && j==0){
                b = tmp - '0';
            }
            else if(i==N-2 && j==N-1){
                x = tmp - '0';
            }
            else if(i==N-1 && j==N-2){
                y = tmp - '0';
            }
        }
    }
    int ans = 0;
    vector<pair<int,int>> v;
    if(a==0 && b==0){
        if(x==0 && y==0){
            ans = 2;
            v.push_back(make_pair(N-1,N-2));
            v.push_back(make_pair(N-2,N-1));
        }
        else if(x==1 && y==0){
            ans = 1;
            v.push_back(make_pair(N-1,N-2));
        }
        else if(x==0 && y==1){
            ans = 1;
            v.push_back(make_pair(N-2,N-1));
        }
        else if(x==1 && y==1){
            ans = 0;
        }
    }
    else if(a==1 && b==0){
        if(x==0 && y==0){
            ans = 1;
            v.push_back(make_pair(1,0));
        }
        else if(x==1 && y==0){
            ans = 2;
            v.push_back(make_pair(1,0));
            v.push_back(make_pair(N-2,N-1));
        }
        else if(x==0 && y==1){
            ans = 2;
            v.push_back(make_pair(1,0));
            v.push_back(make_pair(N-1,N-2));
        }
        else if(x==1 && y==1){
            ans = 1;
            v.push_back(make_pair(0,1));
        }
    }
    else if(a==0 && b==1){
        if(x==0 && y==0){
            ans = 1;
            v.push_back(make_pair(0,1));
        }
        else if(x==1 && y==0){
            ans = 2;
            v.push_back(make_pair(0,1));
            v.push_back(make_pair(N-2,N-1));
        }
        else if(x==0 && y==1){
            ans = 2;
            v.push_back(make_pair(0,1));
            v.push_back(make_pair(N-1,N-2));
        }
        else if(x==1 && y==1){
            ans = 1;
            v.push_back(make_pair(1,0));
        }
    }
    else if(a==1 && b==1){
        if(x==0 && y==0){
            ans = 0;
        }
        else if(x==1 && y==0){
            ans = 1;
            v.push_back(make_pair(N-2,N-1));
        }
        else if(x==0 && y==1){
            ans = 1;
            v.push_back(make_pair(N-1,N-2));
        }
        else if(x==1 && y==1){
            ans = 2;
            v.push_back(make_pair(N-2,N-1));
            v.push_back(make_pair(N-1,N-2));
        }
    }
    cout<<ans<<endl;
    for(int i=0;i<ans;i++){
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}