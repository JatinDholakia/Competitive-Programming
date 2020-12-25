#include<bits/stdc++.h>
using namespace std;
const int mod = 1'000'000'007;

namespace nCr {
    int fact[200005];

    void init() {
        fact[0]=1;
        for(int i = 1; i <= 200000; i++) {
            fact[i] = (fact[i-1] * 1LL * i)%mod;
        }
    }
};

int main() {
    nCr::init();
    cout << nCr::fact[10] << endl;
    return 0;
}