#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool compararNomes(const string& a, const string& b) {
    for (size_t i = 0; i < min(a.length(), b.length()); ++i) {
        char ca = tolower(a[i]);
        char cb = tolower(b[i]);

        if (ca < cb) return true;
        if (ca > cb) return false;
    }

    return a.length() < b.length();
}

int main() {
    _;

    int n;
   
    cin >> n;

   
    vector<string> nomes;

   
    for (int i = 0; i < n; ++i) {
        string nome;
        cin >> nome;
        nomes.push_back(nome);
    }

    sort(nomes.begin(), nomes.end(), compararNomes);

  

    for (const string& nome : nomes) {
        cout << nome << endl;
    }

    return 0;
}