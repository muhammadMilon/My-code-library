#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 1e5 + 5;
vector<int> prime;
bool vis[N];

void sieve() {
    for(int i = 2; i * i < N; i++) {
        if(!vis[i]) {
            for(int j = i * i; j < N; j += i) {
                vis[j] = true;
            }
        }
    }

    for(int i = 2; i < N; i++) {
        if(!vis[i]) {
            prime.push_back(i);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve();
    for(int i = 0; i < 10; i++) {
        cout << prime[i] << ' ';
    }
    cout << '\n';

    return 0;
}
