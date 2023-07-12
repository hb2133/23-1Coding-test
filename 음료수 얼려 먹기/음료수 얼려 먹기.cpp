#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited)
{
	visited[node] = true;

	for (int i = 0; i < adj[node].size(); i++)
	{
		int child = adj[node][i];

		if (!visited[child])
		{
			DFS(child, adj, visited);
		}
	}



}

int main(void)
{
	int x, y;
	cin >> x >> y;

	vector<vector<int>> ary(x);
	vector<bool>visited(x, false);

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			int n;
			cin >> n;
			ary[i].push_back(n);
		}
		cout << endl;
	}

	DFS(0, ary, visited);

	return 0;
}