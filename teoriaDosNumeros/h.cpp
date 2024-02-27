#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
bool is_prime(ll n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int count_primes(const vector<ll>& numbers) {
    int count = 0;
    for (int num : numbers) {
        if (is_prime(num))
            count++;
    }
    return count;
}

int main() {
    _;

    int N;
    cin >> N;
    vector<ll> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }
    cout << count_primes(numbers) << endl;
    return 0;

  
}