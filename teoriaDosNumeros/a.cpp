#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll mdc(ll a, ll b) {
    while (b != 0) {
        ll r = a % b;
        a = b;
        b = r;
    }
    return a;
}
ll mmc(ll a, ll b) { 
    return a * (b / mdc(a, b)); 
}

int main() {
    _;

    int n;
    ll a, aux;
    vector<ll> v;

    cin >> n;
    ll soma=0;

    while (n--) {
        cin >> a;
        soma+=a;
        v.push_back(a);
    }
    aux = v[0];

    for (int i = 1; i < v.size(); i++) {
        aux = mmc(aux, v[i]);
    }
    cout << aux << endl;


    return 0;
}