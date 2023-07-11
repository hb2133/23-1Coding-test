#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> adj[6];
	for (int j = 0; j < 6; j++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
}