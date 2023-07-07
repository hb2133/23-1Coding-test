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
			if (py += -4 == 0) {
				py += -4;
				d_map[py] = 1;
			}
			else
				pd = 3;
			break;
		case 1:
			//µ¿
			if (py += 1 == 0) {
				py += 1;
				d_map[py] = 1;
			}
			else
				pd = 0;
			break;
		case 2:
			//³²
			if (py += 4 == 0){
				py += 4;
				d_map[py] = 1;
			}
			else
				pd = 1;
			break;
		case 3:
			//¼­
			if (py += -1 == 0) {
				py += -1;
				d_map[py] = 1;
			}
			else
				pd = 2;	
			break;
		default:
			break;
		}
		if ((py += -1 != 0) && (py += 4 != 0) && (py += 1 != 0) && (py += -4 != 0))
		{
			//À±Çý°æ¿Ô´Ù°¨
		}
	}

	//for (int max : d_map)
	//{
	//	//¹æÇâ
	//	int pd = direction;


	//}


	//for (int max : d_map)
	//{
	//	px *= 4;
	//	py += px;
	//	if (d_map[py] == 0)
	//	{
	//		cout << "À°Áö" << endl;
	//	}
	//	//cout << max << endl;
	//}

}