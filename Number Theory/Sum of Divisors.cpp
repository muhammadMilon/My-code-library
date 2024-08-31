#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int original_n = n; // Store the original value of n
    int sum_of_divisors = 1;

    // Calculate the prime factorization of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int sum_part = 1;
            int term = 1;
            while (n % i == 0) {
                n /= i;
                term *= i;
                sum_part += term;
            }
            sum_of_divisors *= sum_part;
        }
    }

    // If n is still greater than 1, then it is a prime number
    if (n > 1) {
        sum_of_divisors *= (1 + n);
    }

    cout << "Sum of divisors of " << original_n << " is: " << sum_of_divisors << '\n';

    return 0;
}
