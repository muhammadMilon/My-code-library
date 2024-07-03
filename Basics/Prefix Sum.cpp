#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int sz = 2e5 + 5;
const int mod = 2e9 + 7;

int a[sz];
ll prefixSum[sz];
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,q; cin >> n >> q;
    for(int i = 1; i <= n; i++){
       cin >> a[i];
    }
    for(int i = 1; i <= n; i++){
       prefixSum[i] = prefixSum[i-1]+a[i];
    }
    while(q--){
        int l,r; cin >> l >> r;
        cout << prefixSum[r] - prefixSum[l-1] <<'\n';
    }
    
    return 0;
}
