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
    string palavra, palavraCopia;

    getline(cin, palavra);

    palavraCopia = palavra;

    reverse(palavra.begin(), palavra.end());

    if (palavra.compare(palavraCopia) == 0) {
        cout << "sim" << endl;
    } else {
        cout << "não" << endl;
    }

    return 0;
}