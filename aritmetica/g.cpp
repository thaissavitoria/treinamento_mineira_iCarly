#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

double distancia(const double &x1, const double &y1, const double &x2, const double &y2) {
    double dx = abs(x2 - x1);
    double dy = abs(y2 - y1);
    return sqrt(dx * dx + dy * dy);
}

bool ehTrianguloRetangulo(const double &x1, const double &y1, const double &x2, const double &y2, const double &x3, const double &y3) {
    double lado1 = distancia(x1, y1, x2, y2);
    double lado2 = distancia(x2, y2, x3, y3);
    double lado3 = distancia(x3, y3, x1, y1);

    if (lado1 == 0 || lado2 == 0 || lado3 == 0)
        return false;

    double hipotenusa = max({ lado1, lado2, lado3 });

    double somaQuadrados = 0;
    if (hipotenusa == lado1) {
        somaQuadrados = pow(lado2, 2) + pow(lado3, 2);
    } else if (hipotenusa == lado2) {
        somaQuadrados = pow(lado1, 2) + pow(lado3, 2);
    } else {
        somaQuadrados = pow(lado1, 2) + pow(lado2, 2);
    }

    return pow(hipotenusa, 2) == somaQuadrados;
}

vector<int> tokenizar(const string &frase) {
    vector<int>tokens;
    stringstream ss(frase);
    char del = ' ';
    string token;

    while (getline(ss, token, del)) {
        int num = stoi(token);
        tokens.push_back(num);
    }

    return tokens;
}

int main() {
    _;

    int num;
    cin >> num;
    cin.ignore();

    string linha;
    vector<string>linhas;

    while (num--) {
        getline(cin, linha);
        linhas.push_back(linha);
    }

    for (auto l : linhas) {
        vector<int>nums = tokenizar(l);
        if (ehTrianguloRetangulo(nums[0], nums[1], nums[2], nums[3], nums[4], nums[5]))
            cout << "sim" << endl;
        else
            cout << "nao" << endl;
    }


    return 0;
}