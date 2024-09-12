#include <iostream>
#include <queue>
using namespace std;

#define MAX_VTXS 256
int visited[MAX_VTXS];
class AdjMatGraph
{
protected:
    int size;
    char vertices[MAX_VTXS];
    int adj[MAX_VTXS][MAX_VTXS];

public:
    AdjMatGraph() { reset(); }
    char getVertex(int i) { return vertices[i]; }
    int getEdge(int i, int j) { return adj[i][j]; }
    void setEdge(int i, int j, int val) { adj[i][j] = val; }
    bool isEmpty() { return size == 0; }
    bool isFull() { return size >= MAX_VTXS; }
    void reset()
    {
        size = 0;
        for (int i = 0; i < MAX_VTXS; i++)
            for (int j = 0; j < MAX_VTXS; j++)
                setEdge(i, j, 0);
    }
    void insertVertex(char name) {
        if (!isFull())
            vertices[size++] = name;
    }
    void insertEdge(int u, int v) {
        setEdge(u, v, 1);
        setEdge(v, u, 1);
    }
    void display() {
        cout << "  ";
        for (int i = 0; i < size; i++) {
            cout << vertices[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < size; i++) {
            cout << vertices[i] << " ";
            for (int j = 0; j < size; j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
    void resetVisited() {
        for (int i = 0; i < size; i++) {
            visited[i] = false;
        }
    }
    bool isLinked(int u, int v) {
        return getEdge(u, v) != 0;
    }
    void DFS(int v) {
        visited[v] = true;
        cout << v << " ";
        for (int x = 0; x < size; x++)
            if (isLinked(v, x) && !visited[x]) DFS(x);
    }
    void BFS(int v) {
        queue<int> q;
        fill_n(visited, size, -1);
        q.push(v);
        visited[v] = 0;
        while (!q.empty())
        {
            int x = q.front();
            cout << q.front() << " ";
            q.pop();
            for (int i = 0;i < size;i++) {
                if (isLinked(x, i) && visited[i]==-1) {
                    q.push(i);
                    visited[i] = visited[x] + 1;
                }
            }
        }
    }
};


int main()
{
    int n, m, temp1, temp2;
    cout << "정점의 개수와 간선의 수 :";
    cin >> n >> m;
    cout << "간선의 시작정점과 끝 정점 :" << endl;

    AdjMatGraph g;
    for (int i = 0; i < n; i++)
        g.insertVertex('A' + i);
    for (int i = 0; i < m; i++)
    {
        cin >> temp1 >> temp2;
        g.insertEdge(temp1, temp2);
    }
    cout << "인접 행렬로 표현한 그래프" << endl;
    g.display();
    cout << "BFS 탐색 => ";
    //g.resetVisited();
    g.BFS(0);

    return 0;
}