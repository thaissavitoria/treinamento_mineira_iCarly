#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void tokenizar(string &text) {
    char del = ' ';

    stringstream sstream(text);
    string token;

    int maior = 0;
    string aux = "";

    wstring_convert<codecvt_utf8<wchar_t>> converter;

    while (getline(sstream, token, del)) {
        wstring wstr = converter.from_bytes(token);

        if (wstr.size() > maior) {
            maior = wstr.size();
            aux = token;
        }
    }
    cout << aux << endl;
}

int main() {
    _;

    string str;
    getline(cin, str);
    tokenizar(str);

    return 0;
}