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
    
   int naipe, carta;

    cin >> naipe;
    cin >> carta;
   
    string naipeStr, cartaStr;

    switch (naipe) {
        case 0:
            naipeStr = "Paus";
            break;
        case 1:
            naipeStr = "Ouro";
            break;
        case 2:
            naipeStr = "Coração";
            break;
        case 3:
            naipeStr = "Espada";
            break;
        default:
            break;
    }

    
    if (carta >= 2 && carta <= 10) {
        cartaStr = to_string(carta);
    } else {
        switch (carta) {
            case 1:
                cartaStr = "Às";
                break;
            case 11:
                cartaStr = "Valete";
                break;
            case 12:
                cartaStr = "Dama";
                break;
            case 13:
                cartaStr = "Rei";
                break;
            default:
                break;
        }
    }

    cout << cartaStr << " de " << naipeStr << endl;

    return 0;

 
}