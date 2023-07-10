#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int x, y;
	cin >> x >> y;

	vector<int> d_map;

	int px = 0, py = 0, direction = 0;
	cin >> px >> py >> direction;

	int num;
	int count = 0;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			cin >> num;
			d_map.push_back(num);
		}
		cout << endl;
	}

	px *= 4;
	py += px;
	int pd = direction;
	while (true)
	{
		switch (pd)
		{
		case 0:
			//ºÏ
			if (d_map[py-4] == 0) {
				d_map[py] = 1;
				py += -4;
				count++;
			}
			else
				pd = 3;
			break;
		case 1:
			//µ¿
			if (d_map[py + 1] == 0) {
				d_map[py] = 1;
				py += 1;
				count++;
			}
			else
				pd = 0;
			break;
		case 2:
			//³²
			if (d_map[py + 4] == 0){
				d_map[py] = 1;
				py += 4;
				count++;
			}
			else
				pd = 1;
			break;
		case 3:
			//¼­
			if (d_map[py - 1] == 0) {
				d_map[py] = 1;
				py += -1;
				count++;
			}
			else
				pd = 2;	
			break;
		}
		if ((d_map[py - 1] == 1) && (d_map[py + 4] == 1) && (d_map[py + 1] == 1) && (d_map[py - 4] == 1))
		{
			if (d_map[py] == 0)
			{
				d_map[py] = 1;
				count++;
				switch (pd)
				{
				case 0:
					py += 4;
					break;
				case 1:
					py -= 1;
					break;
				case 2:
					py -= 4;
					break;
				case 3:
					py += 1;
					break;
				}
			}
			else
				break;
		}
	}

	cout << count << endl;
}