#include<bits/stdc++.h>
using namespace std;
vector<int> primeFactors(int n) {
    vector<int> ans;
    while (n%2 == 0){
        ans.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2){
        while (n%i == 0){
            ans.push_back(i);
            n = n/i;
        }
    }
    if (n > 2)
    ans.push_back(n);
    return ans;
}