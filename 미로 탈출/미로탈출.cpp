#include <iostream>
using namespace std;

int n, m;
int ary[200][200];

int BFS(int n, int m)
{
	if (n < 0 || m < 0)
		return;


}

int main(void)
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int k;
			cin >> k;

			ary[i][j] = k;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			BFS(n, m);
		}

	}

	return 0;
}