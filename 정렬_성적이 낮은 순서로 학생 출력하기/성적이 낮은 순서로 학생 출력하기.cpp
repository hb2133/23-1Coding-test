#include <iostream>
#include <vector>
using namespace std;

struct Player {
	string name;
	int score;
};

int main(void)
{
	int n;
	vector<Player> arr;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		Player p;
		cin >> p.name >> p.score;
		arr.push_back(p);
	}

	for (int i = 0; i < n; i++)
	{
		int key = i;
		for (int j = i + 1; i < n; i++)
		{
			if (arr[i].score > arr[j].score)
			{
				int value = arr[j].score;
				arr[j].score = arr[i].score;
				arr[i].score = value;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i].score << " ";
	}

	return 0;
}
