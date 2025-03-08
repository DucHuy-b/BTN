#include <iostream>
#include <vector>

using namespace std;

struct point {
    int x, y;
    point(int x, int y) : x(x), y(y) {}
};

int dx[] = { -1, 0, 1, 0 };
int dy[] = { 0, 1, 0, -1 };

bool isValid(point p, int N) {
    return p.x >= 0 && p.x < N && p.y >= 0 && p.y < N;
}

int PathFind(vector<vector<int>>maze, int N, point curr, point dest, vector<vector<bool>>visited) {
    if (curr.x == dest.x && curr.y == dest.y) {
        return 0;
    }
    visited[curr.x][curr.y] = true;
    int minPath = INT32_MAX;
    for (int i = 0; i < 4; i++) {
        point next(curr.x + dx[i], curr.y + dy[i]);

        //Kiểm tra tính hợp lệ của điểm next

        if (isValid(next, N) && maze[next.x][next.y] == 0 && !visited[next.x][next.y]) {
            int path = PathFind(maze, N, next, dest, visited);
            if (path != INT32_MAX) {
                minPath = min(minPath, path + 1);
            }
        }

    }
    visited[curr.x][curr.y] = false;
    return minPath;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> maze(N);
    vector<vector<bool>> visited(N);
    for (int i = 0; i < N; i++) {
        maze[i].resize(N);
        visited[i].resize(N);
        for (int j = 0; j < N; j++) {
            cin >> maze[i][j];
            visited[i][j] = false;
        }
    }
    point start(0, 0);
    point dest(N - 1, N - 1);
    int pth = PathFind(maze, N, start, dest, visited);
    if (pth == INT32_MAX) {
        cout<<"No path found";
    }
    else {
        cout<<"Shortest path: "<<pth;
       }
    return 0;
}
