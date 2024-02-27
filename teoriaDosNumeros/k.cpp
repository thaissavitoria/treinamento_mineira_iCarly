#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void crivoEratostenes(ll limite) {
    vector<bool> numerosPrimos(limite + 1, true);

    for (ll p = 2; p * p <= limite; ++p) {
        if (numerosPrimos[p] == true) {
            for (ll i = p * p; i <= limite; i += p)
                numerosPrimos[i] = false;
        }
    }

    ll count = 0;
    for (ll i = 1; i < limite; ++i) {
        if (gcd(i, limite) == 1) {
            count++;
        }
    }
    cout << count << endl;
}

int main() {
    _;

    ll num;
    cin >> num;

    crivoEratostenes(num);

    return 0;
}
