#include <bits/stdc++.h>
using namespace std;

const int N = 105;
string s[N];
bool vis[N][N];
int n, m;
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

// Check if a cell is within bounds, unvisited, and valid
bool isValid(int x, int y) {
    return (x >= 0 && x < n && y >= 0 && y < m && !vis[x][y]);
}

// Depth-first search to mark all connected '@' cells
void dfs(int x, int y) {
    if (vis[x][y]) return;
    vis[x][y] = true;

    for (int i = 0; i < 8; i++) {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        if (isValid(next_x, next_y) and s[next_x][next_y] == '@') {
            dfs(next_x, next_y);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // Read input until n and m are both zero
    while (cin >> n >> m and n and m) {
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }

        // Reset visited array
        memset(vis, 0, sizeof(vis));

        int components = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (s[i][j] == '@' and !vis[i][j]) { // Check for unvisited '@'
                    dfs(i, j);
                    components++;
                }
            }
        }

        cout << components << '\n';
    }

    return 0;
}

/*
input:
1 1
*
3 5
*@*@*
**@**
*@*@*
1 8
@@****@*
5 5
****@
*@@*@
*@**@
@@@*@
@@**@
0 0
output:
0
1
2
2
*/
