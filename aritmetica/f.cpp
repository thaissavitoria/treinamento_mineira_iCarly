#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void sieve_of_eratosthenes(int limit, vector<int>& primes) {
    vector<bool> is_prime(limit + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int number = 2; number * number <= limit; ++number) {
        if (is_prime[number]) {
            primes.push_back(number);
            for (int multiple = number * number; multiple <= limit; multiple += number) {
                is_prime[multiple] = false;
            }
        }
    }

    for (int number = max(2, static_cast<int>(sqrt(limit)) + 1); number <= limit; ++number) {
        if (is_prime[number]) {
            primes.push_back(number);
        }
    }
}

void primes_between_range(int start, int end) {
    int limit = max(end, 2);
    vector<int> primes;
    sieve_of_eratosthenes(limit, primes);

    for (int prime : primes) {
        if (prime >= start && prime <= end) {
            cout << prime << " ";
        }
    }
    cout << endl;
}

int main() {
    _;

    int start, end;
    cin >> start >> end;

    primes_between_range(start, end);

    return 0;


}