#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void tokenizar(std::wstring &text) {
    wchar_t del = L' ';

    wstringstream sstream(text);
    std::wstring token;

    int cont_bloco = 0, cont_caracter = 0;

    while (getline(sstream, token, del)) {
        if (token != L"") {
            cont_bloco++;
            cont_caracter += token.size();
        }
    }
    cout << cont_bloco << endl << cont_caracter << endl;
}

int main() {
    _;

    string str;
    getline(cin, str);

    std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
    std::wstring wstr = converter.from_bytes(str);

    tokenizar(wstr);

    return 0;
}