#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define vll vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define MOD 1000000007
 
using namespace std;
 
vector<ll> fac;
 
pll ans(ll a, ll b, ll i){
    if(i==fac.size()){
        return {a,b};
    }else{
        pll p1 = ans(a*fac[i], b, i+1);
        pll p2 = ans(a, b*fac[i], i+1);
        if(max(p1.first, p1.second)<max(p2.first,p2.second)){
            return p1;
        }else
        {
            return p2;
        }
    }
}
 
int main(){
  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
  
    ll n;
    cin>>n;
    for(ll i=2; i<(ll)1e6; i++){
        ll temp=1;
        while(n%i==0){
            n/=i;
            temp*=i;
        }
        if(temp!=1){
            fac.push_back(temp);
        }
        if(n==1){
            break;
        }
    }
    if(n!=1){
        fac.push_back(n);
    }
    pll final_ans = ans(1,1,0);
    cout<<final_ans.first<<" "<<final_ans.second<<"\n";
 
  
    return 0;
}