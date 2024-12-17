#include <iostream>
using namespace std;
int main()
{
	for (int i = 1; i < 126;i++)
	{
		for (int j = 1; j <= 27; j++)
		{
				cout << ((char)(i + 40));
		}
		cout << endl;
	}
	return 0;
}