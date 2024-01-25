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

    int n;
    string str;

    cin >> n;
    cin.ignore();

    while (n--) {
        getline(cin, str);
        int meio = str.length() / 2;

        string aux = str.substr(0, meio);
        string aux2 = str.substr(meio, str.length());

        reverse(aux.begin(), aux.end());
        reverse(aux2.begin(), aux2.end());

        cout << aux << aux2 << endl;
    }

    return 0;
}