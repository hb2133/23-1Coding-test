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
			//��
			if (py += -4 == 0) {
				py += -4;
				d_map[py] = 1;
			}
			else
				pd = 3;
			break;
		case 1:
			//��
			if (py += 1 == 0) {
				py += 1;
				d_map[py] = 1;
			}
			else
				pd = 0;
			break;
		case 2:
			//��
			if (py += 4 == 0){
				py += 4;
				d_map[py] = 1;
			}
			else
				pd = 1;
			break;
		case 3:
			//��
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
			//������Դٰ�
		}
	}

	//for (int max : d_map)
	//{
	//	//����
	//	int pd = direction;


	//}


	//for (int max : d_map)
	//{
	//	px *= 4;
	//	py += px;
	//	if (d_map[py] == 0)
	//	{
	//		cout << "����" << endl;
	//	}
	//	//cout << max << endl;
	//}

}