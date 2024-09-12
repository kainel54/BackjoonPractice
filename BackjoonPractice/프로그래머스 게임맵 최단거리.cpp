#include<vector>
#include<queue>
#include<iostream>
using namespace std;
vector<vector<int>> map;
int row, col;
int visited[101][101];
int dist[101][101];

queue<pair<int, int>>que;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
	que.push({ x, y });
	visited[x][y] = 1;
	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();
		for (int i = 0; i < 4; i++)
		{
			int nx = x + dx[i];
			int ny = y + dy[i]; // row 행사이즈, col 열사이즈
			if (nx <= 0 || ny <= 0 || nx >= x || ny >= y) continue;
			if (visited[nx][ny] == 0 && map[nx][ny] == 1)
			{
				que.push({ nx,ny });
				visited[nx][ny] = visited[x][y] + 1;
			}
		}
	}
}

int solution(vector<vector<int> > maps)
{
	map = maps;
	BFS(0, 0);

	int answer = 0;
	answer = visited[4][4];
	return answer;
}