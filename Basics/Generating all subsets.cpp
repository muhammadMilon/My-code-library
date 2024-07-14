#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const int N = 1e5 + 5;
const int mod = 1e9 + 7;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int mask = 0; mask < (1 << n); mask++){ //(1 << n) means 2^n
        for(int i = 0; i < n; i++){
            if((mask >> i) & 1){ //if ith bit is on in this mask, so taken
                cout << a[i] <<' ';
            }
        }
        cout <<'\n';
    }
    
    return 0;
}
