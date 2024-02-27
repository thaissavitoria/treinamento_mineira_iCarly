#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ehPrimo(ll num) {
    if (num <= 1) return false;
    for (ll i = 2; i <= sqrt(num); i++)
        if (num % i == 0)
            return false;
    return true;
}

int main() {
    ll num;
    cin >> num;

    while (num-- > 0) {
        ll n;
        cin >> n;

        cout << ehPrimo(n) << endl;
    }
    return 0;
}