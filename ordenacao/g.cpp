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
    
    vector<int> cartas;
    int cart;


    while (cin >> cart) {
        cartas.push_back(cart);
    }

   auto compararCartas = [](int a, int b) {
        if (a == 1) a = 1; 
        if (b == 1) b = 1;

        return a < b;
    };
    
    sort(cartas.begin(), cartas.end(), compararCartas);

 
    for (int carta : cartas) {
        if (carta == 1) {
            cout << 'A' << " ";
        } else if (carta == 11) {
            cout << 'J' << " ";
        } else if (carta == 12) {
            cout << 'Q' << " ";
        } else if (carta == 13) {
            cout << 'K' << " ";
        } else {
            cout << carta << " ";
        }
    }

    return 0;
}