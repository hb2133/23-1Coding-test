#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main()
{
	int n, m;

	cin >> n >> m;

	int a;
	vector<int> card;
	vector<int> index;
	int min = 0;
	int max = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> a;
			card.push_back(a);
		}
		min = *min_element(card.begin(), card.end());
		card.clear();
		index.push_back(min);
	}

	max = *max_element(index.begin(), index.end());

	cout << max;



}