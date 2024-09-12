#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int>visited;
vector<vector<int>>v;

void BFS(int n)
{
	queue<int> q;
	q.push(n);
	visited[n] = 0;  // 시작 노드는 거리 0으로 설정

	while (!q.empty())
	{
		int curr = q.front();
		q.pop();

		for (int next : v[curr])
		{
			if (visited[next] == -1)
			{
				visited[next] = visited[curr] + 1;
				q.push(next);
			}
		}
	}
}

int main()
{
	int n, m, dis, start, v1, v2;
	cin >> n >> m >> dis >> start;
	v.resize(n + 1);
	visited.resize(n + 1, -1);

	for (int i = 0; i < m; i++)
	{
		cin >> v1 >> v2;
		v[v1].push_back(v2);
	}
	BFS(start);

	bool none = true;
	for (int i = 1; i <= n; i++)
	{
		if (visited[i] == dis) {
			cout << i << "\n";
			none = false;
		}
	}
	if (none) cout << -1;
}