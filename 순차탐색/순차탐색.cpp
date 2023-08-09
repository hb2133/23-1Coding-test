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
		cout << "값 " << target << "을 찾았습니다." << endl;
	}
	else {
		cout << "값 " << target << "을 찾지 못했습니다." << endl;
	}
	return 0;
}