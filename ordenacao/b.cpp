#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define dbg(x) cout << #x << " = " << x << endl

typedef unsigned long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

struct Point {
    int x, y;
    double distance; 
    int index; 

    
    Point(int xCoord, int yCoord, int idx) : x(xCoord), y(yCoord), index(idx) {
        distance = sqrt(x * x + y * y);
    }
};


bool comparePoints(const Point &a, const Point &b) {
    if (a.distance != b.distance) {
        return a.distance < b.distance;
    }
    return a.index < b.index;
}

int main() {
    _;

    int N;
    cin >> N;

    vector<Point> points;

    
    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        points.emplace_back(x, y, i);
    }

   
    sort(points.begin(), points.end(), comparePoints);

    
    for (const auto &point : points) {
        cout << point.x << " " << point.y << endl;
    }

    return 0;
}