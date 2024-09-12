#include<vector>
#include<queue>
#include<iostream>
using namespace std;

vector<vector<int>> map;
int row, col;
int visited[101][101];
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

queue<pair<int, int>> que;

void BFS(int x, int y) {
    que.push({ x, y });
    visited[x][y] = 1;
    while (!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;
        que.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i]; // row 행사이즈, col 열사이즈
            // 경계 체크
            if (nx < 0 || ny < 0 || nx >= row || ny >= col) continue;
            if (visited[nx][ny] == 0 && map[nx][ny] == 1) {
                que.push({ nx, ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }
}

int solution(vector<vector<int>> maps) {
    map = maps;
    row = map.size();
    col = map[0].size();

    BFS(0, 0);

    // 도착지에 도달하지 못한 경우를 대비해 조건 추가
    if (visited[row-1][col-1] == 0) return -1;

    return visited[row-1][col-1];
}
