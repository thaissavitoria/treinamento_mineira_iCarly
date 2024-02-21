#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void generateCombinations(vector<string> &elements, int k, int start, string result) {
    if (k == 0) {
        cout << result << endl;
        return;
    }

    for (int i = start; i <= elements.size() - k; ++i) {
        // Se for o último elemento a ser adicionado, não adicione uma vírgula
        string separator = (k == 1) ? "" : ",";
        generateCombinations(elements, k - 1, i + 1, result + elements[i] + separator);
    }
}

int main() {
    _;
    string input;
    cout << "Digite os elementos separados por vírgula (sem espaço): ";
    getline(cin, input);

    vector<string> elements;
    stringstream ss(input);
    string token;
    while (getline(ss, token, ',')) {
        elements.push_back(token);
    }

    cout << "Combinações possíveis:" << endl;
    for (int k = 1; k <= elements.size(); ++k) {
        generateCombinations(elements, k, 0, "");
    }

    return 0;
}