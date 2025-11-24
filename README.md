#include <iostream>  
using namespace std;

void zadatak_a();
void zadatak_b();

	void zadatak_a();
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
	}

void zadatak_b()
{
		int a, b;
		char c
		cin >> a >> b;
		cin >> c;
		switch (a)
		{
		case 1: 
			if (c == '+')
				cout << a << " +" << b << "="a + b;
		case 2:
			if (c == '-')
				cout << a << " - " << b << "="a-b;
		case 3:	
			if (c == '*')
				cout << a <<" *" <<b << "="a*b;
		case 4:
			if (c == '/')
				cout << a << " / " << b << "="a / b;
		case 5:
			if (c == '%')
				cout << a << " % " << b << "="a % b;
		default:
			cout << "Nepoznata operacija";
			break;
		}

	}

int main() {
	zadatak_a();
	zadatak_b();
	return 0;
}
	
