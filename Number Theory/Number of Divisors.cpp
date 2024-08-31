#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int num_divisors = 1;

    // Calculate the prime factorization of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            num_divisors *= (count + 1);
        }
    }

    // If n is still greater than 1, then it is a prime number
    if (n > 1) {
        num_divisors *= 2;
    }

    cout << "Number of divisors: " << num_divisors << '\n';

    return 0;
}
