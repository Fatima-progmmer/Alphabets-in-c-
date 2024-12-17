#include <iostream>
using namespace std;
int main()
{
	for (int i =127; i > 1;i--)
	{
		for (int j = 1; j <= 27; j++)
		{
				cout << "\t";
				cout << ((char)(i +56));
		}
		cout << endl;
	}
	return 0;
}