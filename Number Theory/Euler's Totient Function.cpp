#include <bits/stdc++.h>
#define int long long
using namespace std;

void phi(int n){
    int ans = n;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                n /= i;
            }
            ans *= (i-1);
            ans /= i;
        }
    }
    if(n > 1){
        ans *= n-1;
        ans /= n;
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    phi(n);
    
    
    return 0;
}
