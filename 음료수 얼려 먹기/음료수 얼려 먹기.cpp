#include <iostream>
#include <vector>
using namespace std;

vector<vector<bool>> visited;

void DFS(int x, int y, vector<vector<int>>& adj, int n, int m)
{
	if (x < 0 || y < 0 || x >= n || y >= m || visited[x][y] || adj[x][y] != 0)
		return;

	visited[x][y] = true;

	DFS(x + 1, y, adj, n, m);
	DFS(x - 1, y, adj, n, m);
	DFS(x, y+1, adj, n, m);
	DFS(x, y-1, adj, n, m);
}

int main(void)
{
	int x, y;
	cin >> x >> y;

	vector<vector<int>> ary(x, vector<int>(y));
	visited.resize(x, vector<bool>(y, false));

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> ary[i][j];
		}
	}

	int count = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			if (!visited[i][j] && ary[i][j] == 0)
			{
				DFS(i, j, ary, x, y);
				count++;
			}
		}
	}

	cout << count << endl;

	return 0;
}