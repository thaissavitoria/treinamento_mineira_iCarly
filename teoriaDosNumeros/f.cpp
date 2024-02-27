#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool is_perfect(int num) {
    if (num == 1) 
        return false;

    int sum = 1; 
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) { 
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int main() {
    _;

    int N;
    cin >> N;

    cout << (is_perfect(N) ? "sim" : "nao") << endl;



    for (int i = 1; i <= N; ++i) {
        if (is_perfect(i)) {
            cout << i << " ";
        }
    }

    cout<<endl;

    return 0;
}