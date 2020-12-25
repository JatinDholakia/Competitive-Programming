#include<bits/stdc++.h>
using namespace std;
const int mod = 1'000'000'007;

int mpow(int base, int exp) {
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((long long)result * base) % mod;
    base = ((long long)base * base) % mod;
    exp >>= 1;
  }
  return result;
}