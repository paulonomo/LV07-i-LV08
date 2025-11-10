#include <iostream>  
using namespace std;

int main()
{
	int mj, god;
	cin >> mj >> god;

	switch (mj)
	{
	case 1:
		if (mj%2==0)
			cout << "30";
	case 2: 
		if (mj % 2 != 0)
			cout << "31";
	case 3:
		if (god % 4 == 0 && god % 100 != 0 || god % 400 == 0)
			cout << "29";
		else
			cout << "28";
	break;

	}
	return 0;*/

int 
}
