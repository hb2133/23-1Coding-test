#include <iostream>
#include <queue>
using namespace std;

const int dx[4] = { -1, 0, 1, 0 };
const int dy[4] = { 0, 1, 0, -1 };
int n, m;
int ary[200][200];
int dist[200][200];

bool isValid(int x, int y)
{
	return (x >= 0 && y >= 0 && x < n&& y < m);
}

void BFS(int x, int y)
{
	queue<pair<int, int>> q;
	dist[x][y] = 1;
	q.push({ x, y });

	while (!q.empty())
	{
		pair<int, int> node = q.front(); q.pop();

		for (int i = 0; i < 4; i++)
		{
			int newX = node.first + dx[i];
			int newY = node.second + dy[i];

			if (isValid(newX, newY) && ary[newX][newY] == 1 && dist[newX][newY] == 0)
			{
				dist[newX][newY] = dist[node.first][node.second] + 1;
				q.push({ newX, newY });
			}
		}
	}
}

int main(void)
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> ary[i][j];
		}
	}

	BFS(0, 0);

	cout << dist[n - 1][m - 1] << endl;

	return 0;
}