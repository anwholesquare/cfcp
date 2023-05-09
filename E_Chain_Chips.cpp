#include <iostream>
#include <queue>
#include <tuple>
#include <set>

using namespace std;

int a, b;
set<tuple<int, int, int>> visited;

int bfs() {
    queue<tuple<int, int, int, int>> q;
    q.push(make_tuple(0, 0, 1, 0));

    while (!q.empty()) {
        int x, y, m, moves;
        tie(x, y, m, moves) = q.front();
        q.pop();

        if (x == a && y == b) {
            return moves;
        }

        if (visited.find(make_tuple(x, y, m)) != visited.end()) {
            continue;
        }
        visited.insert(make_tuple(x, y, m));

        if (x + m <= a) {
            q.push(make_tuple(x + m, y, m, moves + 1));
        }
        if (y + m <= b) {
            q.push(make_tuple(x, y + m, m, moves + 1));
        }
        q.push(make_tuple(x, y, m + 1, moves + 1));
    }

    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        cout << bfs() << endl;
    }
    return 0;
}
