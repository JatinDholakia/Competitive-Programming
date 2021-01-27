    #include<bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define deb(x) cout << #x << "=" << x << endl
    #define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
    #define For(i,x,n) for(int i=x;i<n;i++)
    #define pb push_back
    #define print(vec) for(int i=0;i<vec.size();i++) cout<<vec[i]<<" ";
    #define pii pair<int,int>
    //=======================

    map<int,int> trial_division4(long long n, vector<ll> &primes) {
    // vector<long long> factorization;
    map<int,int> factorization;
    for (long long d : primes) {
        if (d * d > n)
            break;
        while (n % d == 0) {
            // factorization.push_back(d);
            factorization[d]++;
            n /= d;
        }
    }
    if (n > 1)
        // factorization.push_back(n);
        factorization[n]++;
    return factorization;
}

    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r",stdin);
            // freopen("output.txt","w",stdout);
        #endif
        int t = 1;
        int n = 1e9;
        vector<char> is_prime(n+1, true);
        vector<ll> primes;
        is_prime[0] = is_prime[1] = false;
        for (int i = 2; i <= n; i++) {
            if(is_prime[i]){
                primes.pb(i);
            }
            if (is_prime[i] && (long long)i * i <= n) {
                // primes.pb(i);
                for (int j = i * i; j <= n; j += i)
                    is_prime[j] = false;
            }
        }
        cin >> t;
        while(t--) {
            ll p,q;
            cin>>p>>q;
            map<int,int> pr_p = trial_division4(p,primes);
            map<int,int> pr_q = trial_division4(q,primes);
            ll y = 0;
            for(auto x:pr_q){
                if(pr_p[x.first] - x.second + 1 > 0) {
                    cout<<pr_p[x.first] - x.second + 1<<endl;
                    y = max(y,p / (pr_p[x.first] - (x.second - 1)));
            }
            }
            cout<<"new"<<endl;
            // cout<<y<<"\n";
        }

        return 0;
    }