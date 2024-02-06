#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll binarioParaDecimal(string binario) {
    ll decimal = 0;
    ll potenciaDeDois = 1;

    for (int i = binario.length() - 1; i >= 0; i--) {
        if (binario[i] == '1') {
            decimal += potenciaDeDois;
        }
        potenciaDeDois *= 2;
    }

    return decimal;
}

int main() {
    _;
    ll num;
    cin >> num;
    cin.ignore();

    string binario;
    vector<string>binarios;

    while (num--) {
        getline(cin, binario);
        binarios.push_back(binario);
    }

    for (auto bin : binarios) {
        cout << binarioParaDecimal(bin) << endl;
    }

    return 0;
}