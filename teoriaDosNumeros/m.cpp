#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


void crivoEratostenes(ll limite) {
    vector<bool> numerosPrimos(limite + 1, true);

    for (ll p = 2; p * p <= limite; ++p) {
        if (numerosPrimos[p] == true) {
            for (int i = p * p; i <= limite; i += p)
                numerosPrimos[i] = false;
        }
    }

    ll count=0;
    
    for (ll i = 2; i <= limite; ++i) {
        if (numerosPrimos[i])
           count++;
    }
    cout <<count<< endl;
}


int main() {
    _;
    
    ll num;
    cin >> num;

    crivoEratostenes(num);

    return 0;

}