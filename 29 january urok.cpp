#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{ 
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	cout << "\t\tTask 1\n";
	//�������� ��������, ��� �� ������� ����������� ����� ���� ����������� �������. ���������� ���� ������� ���� ������ � ���� ����.
	int f, b;
	cout<< "0 = ������\t8 = �i���\n";
	cout<< "1 = ���i�\t9 = ��i���-���i�\n";
	cout<< "2 = �������\tA = ��i���-�������\n";
	cout<< "3 = ���������\tB = ��i���-���������\n";
	cout<< "4 = ��������\tC = ��i���-��������\n";
	cout<< "5 = �i��������\tD = ��i���-�i��������\n";
	cout<< "6 = ������\tE = ��i���-������\n";
	cout<< "7 = �i���\tF = �������-�i���\n\n";
	cout<< "Enter font color: \n";
	cin >> f;
	cout << "input background color: \n";
	cin >> b;
    
	switch (f)
	{
	case 1:
		switch (b)
		{
		case 1:
			system("color 11");
			break;
		case 2:
			system("color 12");
			break;
		case 3:
			system("color 13");
			break;
		case 4:
			system("color 14");
			break;
		case 5:
			system("color 15");
			break;
		case 6:
			system("color 16");
			break;
		case 7:
			system("color 17");
			break;
		}
	case 2:
		switch (b)
		{
		case 1:
			system("color 21");
			break;
		case 2:
			system("color 22");
			break;
		case 3:
			system("color 23");
			break;
		case 4:
			system("color 24");
			break;
		case 5:
			system("color 25");
			break;
		case 6:
			system("color 26");
			break;
		case 7:
			system("color 27");
			break;
		}
	case 3:
		switch (b)
		{
		case 1:
			system("color 31");
			break;
		case 2:
			system("color 32");
			break;
		case 3:
			system("color 33");
			break;
		case 4:
			system("color 34");
			break;
		case 5:
			system("color 35");
			break;
		case 6:
			system("color 36");
			break;
		case 7:
			system("color 37");
			break;
		}
	case 4:
		switch (b)
		{
		case 1:
			system("color 41");
			break;
		case 2:
			system("color 42");
			break;
		case 3:
			system("color 43");
			break;
		case 4:
			system("color 44");
			break;
		case 5:
			system("color 45");
			break;
		case 6:
			system("color 46");
			break;
		case 7:
			system("color 47");
			break;
		}
	case 5:
		switch (b)
		{
		case 1:
			system("color 51");
			break;
		case 2:
			system("color 52");
			break;
		case 3:
			system("color 53");
			break;
		case 4:
			system("color 54");
			break;
		case 5:
			system("color 55");
			break;
		case 6:
			system("color 56");
			break;
		case 7:
			system("color 57");
			break;
		}
	case 6:
		switch (b)
		{
		case 1:
			system("color 61");
			break;
		case 2:
			system("color 62");
			break;
		case 3:
			system("color 63");
			break;
		case 4:
			system("color 64");
			break;
		case 5:
			system("color 65");
			break;
		case 6:
			system("color 66");
			break;
		case 7:
			system("color 67");
			break;
		}
	case 7:
		switch (b)
		{
		case 1:
			system("color 71");
			break;
		case 2:
			system("color 72");
			break;
		case 3:
			system("color 73");
			break;
		case 4:
			system("color 74");
			break;
		case 5:
			system("color 75");
			break;
		case 6:
			system("color 76");
			break;
		case 7:
			system("color 77");
			break;
		}
	default:
		break;
	}

	cout << "\t\tTask 2\n";
	//�������� ��������, ��� �� ������� ����������� ������� ������� ��� ����� � ������ �� ������� �� ����� �������.
	int chislo,stupin;
	cout << "������ �����: ";
	cin >> chislo;
	cout << "������ ������(1-7): ";
	cin >> stupin;
	switch (stupin)
	{
	case 0:
		cout << "1";
		break;
	case 1:
		cout << chislo;
		break;
	case 2:
		cout << chislo * chislo;
		break;
	case 3:
		cout << chislo * chislo * chislo;
		break;
	case 4:
		cout << chislo * chislo * chislo * chislo;
		break;
	case 5:
		cout << chislo * chislo* chislo * chislo * chislo;
		break;
	case 6:
		cout << chislo * chislo * chislo * chislo * chislo * chislo;
		break;
	case 7:
		cout << chislo * chislo * chislo * chislo * chislo * chislo * chislo;
		break;
	default:
		break;
	}
}
