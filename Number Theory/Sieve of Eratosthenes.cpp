#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
bitset<N> f;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = N - 9;
  vector<int> primes;
  f[1] = true;
  for (int i = 2; i * i <= n; i++) {
    if (!f[i]) {
      for (int j = i * i; j <= n; j += i) {
        f[j] = true;
      }
    }
  }
  for (int i = 2; i <= n; i++) {
    if (!f[i]) {
      primes.push_back(i);
    }
  }
  for(int i = 0; i < 5; i++){
      cout << primes[i] << ' ';
  }
  return 0;
}
