#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 2e5 + 5;
const int mod = 1e9 + 7;
int Prefix_XOR[N], arr[N];

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; 
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        Prefix_XOR[i] = Prefix_XOR[i-1] ^ arr[i];
    }

    while (m--) {
        int a, b; 
        cin >> a >> b;
        cout << (Prefix_XOR[b] ^ Prefix_XOR[a-1]) << '\n';
    }

    return 0;
}

//https://cses.fi/problemset/task/1650
