#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll power(ll base, ll exp, ll modulo) {
    ll result = 1;
    base = base % modulo;

    while (exp) {
        if (exp & 1) {
            result = (result * base) % modulo;
        }

        exp = exp >> 1;

        base = (base * base) % modulo;
    }

    return result;
}

int main() {
    _;

    ll x, y, z;

    cin >> x >> y >> z;

    ll resultado = (power(x, y, z));

    cout << resultado << endl;

    return 0;
}