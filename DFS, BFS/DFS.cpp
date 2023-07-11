#include <iostream>
#include <vector>
using namespace std;

void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited)
{
	visited[node] = true;
	cout << node << " ";

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
	int n = 5;
	vector<vector<int>> adj(n);
	vector<bool> visited(n, false);

	adj[0].push_back(1);
	adj[0].push_back(2);
	adj[1].push_back(3);
	adj[1].push_back(4);
	adj[2].push_back(3);
	adj[3].push_back(4);

	adj[1].push_back(0);
	adj[2].push_back(0);
	adj[3].push_back(1);
	adj[4].push_back(1);
	adj[3].push_back(2);
	adj[4].push_back(3);

	cout << "DFS traversal: ";
	DFS(0, adj, visited);
	cout << endl;

	return 0;
}