#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int bfs(const vector<vector<int>>& graph, int start) {
    vector<bool> visited(graph.size(), false);
    queue<int> q;
    int infected_count = 0;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
                infected_count++;
            }
        }
    }

    return infected_count;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // 1번 컴퓨터에서 시작하여 감염된 컴퓨터 수 계산
    int result = bfs(graph, 1);
    cout << result << endl;

    return 0;
}
