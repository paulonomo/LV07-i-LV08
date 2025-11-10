#include <iostream>  
#include <cmath>
using namespace std;

void zadatak_a();
void zadatak_b();
void zadatak_c();
void zadatak_d();
void zadatak_e();
void zadatak_f();

void zadatak_a()
{
	int mj, god;
	cin >> mj >> god;

	switch (mj)
	{
	case 1:
		if (mj % 2 == 0)
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
	char op;
	cin >> a >> b;
	cin >> op;
    switch (op) {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if (b != 0) {
            cout << a << " / " << b << " = " << a / b << endl;
        }
        else {
            cout << "Greška: Dijeljenje s nulom nije dozvoljeno!" << endl;
        }
        break;
    case '%':
        if (b != 0) {
            cout << a << " % " << b << " = " << a % b << endl;
        }
        else {
            cout << "Greška: Dijeljenje s nulom nije dozvoljeno!" << endl;
        }
        break;
    default:
        cout << "Nevažeći operator!" << endl;
        break;
	}
}
void zadatak_c()
{
    int mj, dan;
	cin >> mj >> dan;
	switch (mj) {
	case 12:
		if (dan < 21)
			cout << "Jesen";
		else
			cout << "Zima";
		break;
	case 1:
	case 2:
		cout << "Zima";
		break;
	case 3:
		if (dan < 21)
			cout << "Zima";
		else
			cout << "Proljeće";
		break;
	case 4:
	case 5:
		cout << "Proljeće";
		break;
	case 6:
		if (dan < 21)
			cout << "Proljeće";
		else
			cout << "Ljeto";
		break;
	case 7:
	case 8:
		cout << "Ljeto";
		break;
	case 9:
		if (dan < 23)
			cout << "Ljeto";
		else
			cout << "Jesen";
		break;
	case 10:
	case 11:
		cout << "Jesen";
		break;
	default:
		cout << "Nevažeći unos!";
		break;
	}
}
void zadatak_d()
{
	char znak;
	cin >> znak;
	switch (znak) {
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
	case '=':
		cout << "Operator\n";
		break;
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		cout << "Samoglasnik\n";
		break;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		cout << "Znamenka\n";
		break;
	case '.':
	case ',':
	case ';':
	case ':':
	case '?':
	case '!':
	case '"':
	case '"\"':
	case '(':
	case ')':
		cout << "Interpunkcijski znak\n";
		break;
	default:
		cout << "Ostali znakovi\n";
		break;
	}
}
void zadatak_f()
{
	char izbor;
	double a, b, r;
	cout << " Izbornik \n";
	cout << "a) Krug\n";
	cout << "B) Kvadrat\n";
	cout << "c) Pravokutnik\n";
	cout << "d) Pravokutni trokut\n";
	cout << "Izaberite oblik (a,b,c,d): ";
	cin >> izbor;

	switch (izbor) {	
		case 'a':
	{
		cout << "Unesite polumjer kruga: ";
		cin >> r;
		if (r <= 0) {
			cout << "Nevaeci unos!\n";
			break;
		}
		double P =	3.14 * r * r;
		double O =	3.14 * r * 2;
		cout << "Povrsina kruga: " << P << "\n";
		cout << "Opseg kruga: " << O << "\n";
		break;
		}

		case 'b':
		{
			cout << "Unesite stranicu kvadrata: ";
			cin >> a;
			if (a <= 0) {
				cout << "Nevazeci unos!\n";
				break;
			}
			double Pk = a * a;
			double Ok = 4 * a;
			cout << "Povrsina kvadrata: " << Pk << "\n";
			cout << "Opseg kvadrata: " << Ok << "\n";
			break;
			}

		case 'c': {
			cout << "Unesite stranice pravokutnika: ";
			cin >> a >> b;
			if (a <= 0 || b <= 0) {
				cout << "Nevazeci unos!\n";
				break;
			}
			double Pr = a * b;
			double Or = 2 * (a + b);
			cout << "Povrsina pravokutnika: " << Pr << "\n";
			cout << "Opseg pravokutnika: " << Or << "\n";
			break;
		}
		case 'd': {
			cout << "Unesite katete pravokutnog trokuta: ";
			cin >> a >> b;
			if (a <= 0 || b <= 0) {
				cout << "Nevazeci unos!\n";
				break;
			}
			double Pt = (a * b) / 2;
			double c = sqrt(a * a + b * b);
			double Ot = a + b + c;
			cout << "Povrsina pravokutnog trokuta: " << Pt << "\n";
			cout << "Opseg pravokutnog trokuta: " << Ot << "\n";
			break;
		}
		default:
			cout << "Nepostojeca opcija! Pokusajte ponovno.\n";
			break;
	}
}
int main(){

	/*zadatak_a();*/
	/*zadatak_b();*/
	/*zadatak_c();*/
	/*zadatak_d();*/
	/*zadatak_e();*/
	zadatak_f();


	return 0;
}
