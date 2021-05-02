// LeetCode_Solutions.cpp: определяет точку входа для приложения.
//

#include "LeetCode_Solutions.h"

int main()
{
	vector<string> words{ "apple" };
	WordFilter obj{ words };
	int param_1 = obj.f("a", "l");
	cout << param_1 << endl;
	return 0;
}
