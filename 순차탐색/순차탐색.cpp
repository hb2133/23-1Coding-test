#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	list<string> myList = { "Haneul", "Jonggu", "JaeUk", "Taeil", "Sangwook"};
	string target = "JaeUk";
	
	bool found = false;

	for (const string& num : myList)
	{
		if (num == target)
		{
			found = true;
			break;
		}
	}

	if (found)
	{
		cout << "�� " << target << "�� ã�ҽ��ϴ�." << endl;
	}
	else {
		cout << "�� " << target << "�� ã�� ���߽��ϴ�." << endl;
	}
	return 0;
}