#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int start, vector<vector<int>>& adj)
{
	int n = adj.size();
	vector<bool>visited(n, false);

	queue<int> q;
	q.push(start);
	visited[start] = true;

	while (!q.empty()) {
		int node = q.front(); q.pop();
		cout << node << " ";

		for (int i = 0; i < adj[node].size(); i++) {
			int neighbor = adj[node][i];
			if (!visited[neighbor]) {
				q.push(neighbor);
				visited[neighbor] = true;
			}
		}
	}
}

int main(void)
{
	int n = 5;
	vector<vector<int>> adj(n);


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

	cout << "BFS traversal: ";
	BFS(0, adj);
	cout << endl;

	return 0;
}