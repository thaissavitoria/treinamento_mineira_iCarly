#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {
    _;

    string t;

    cin >> t;

    // tamanho
    bool ok1 = false;
    size_t tam = t.size();
    if (tam >= 8) {
        ok1 = true;
    }

    // maiuscula
    bool ok2 = false;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] >= 'A' && t[i] <= 'Z') {
            ok2 = true;
            break;
        }
    }

    // minuscula
    bool ok3 = false;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] >= 'a' && t[i] <= 'z') {
            ok3 = true;
            break;
        }
    }

    // numero
    bool ok4 = false;
    for (int i = 0; i < t.size(); i++) {
        if (t[i] >= '0' && t[i] <= '9') {
            ok4 = true;
            break;
        }
    }

    if (ok1 && ok2 && ok3) cout << "senha valida" << endl;

    if (ok1 == false) cout << "minimo de 8 caracteres" << endl;
    if (ok2 == false) cout << "letra maiuscula" << endl;
    if (ok3 == false) cout << "letra minuscula" << endl;
    if (ok4 == false) cout << "numero" << endl;


    return 0;
}