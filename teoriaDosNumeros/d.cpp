#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

template <typename T>
void crivoEratostenes(ll limite, T &v) {
    vector<bool> numerosPrimos(limite + 1, true);

    for (ll p = 2; p * p <= limite; ++p) {
        if (numerosPrimos[p] == true) {
            for (ll i = p * p; i <= limite; i += p)
                numerosPrimos[i] = false;
        }
    }

    numerosPrimos[1] = false;

    string s;
    for (ll j : v) {
        s = to_string(j);
        ll soma = 0;
        for (ll i = 0; i < s.size(); i++) {
            soma += s[i] - '0';
        }
        if (numerosPrimos[soma] && numerosPrimos[j]) {
            cout << j << endl;
        }
    }
}

int main() {
    _;

    ll L, R;

    cin >> L >> R;

    vector<ll> intervalo;

    for (ll i = L; i <= R; i++) {
        intervalo.push_back(i);
    }

    string s = to_string(intervalo[intervalo.size() - 1]);

    crivoEratostenes(intervalo[intervalo.size() - 1], intervalo);

    return 0;
}