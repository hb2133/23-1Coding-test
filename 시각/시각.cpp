#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str = "3";
	int num;
	cin >> num;

	int m = 0, s = 0, h = 0;
	int count = 0;

	while (true)
	{
		string str_s = to_string(s);
		string str_m = to_string(m);
		string str_h = to_string(h);
		if (str_s.find(str) != string::npos || str_m.find(str) != string::npos || str_h.find(str) != string::npos)
		{
			count++;
		}
		s += 1;
		if (s == 60)
		{
			s = 0;
			m += 1;
			if (m == 60)
			{
				m = 0;
				h += 1;
				if (h > num)
				{
					break;
				}
			}
		}
	}

	cout << count << endl;

	return 0;
}