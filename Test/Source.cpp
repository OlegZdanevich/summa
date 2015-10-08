#include <iostream>
using namespace std;
int main()
{
	int z;
	z = 1;
	while (z == 1)
	{

		int a, c, b;
		cout << "enter number" << endl;
		cin >> a;
		system("cls");
		c = a % 10;
		b = (a - c) / 10;

		switch (b)
		{
		case 2:
			cout << "twenty ";
			break;
		case 3:
			cout << "therty ";
			break;
		case 4:
			cout << "fourty ";
			break;
		case 5:
			cout << "fifty ";
			break;
		case 6:
			cout << "sixty ";
			break;
		case 7:
			cout << "seventy ";
			break;
		case 8:
			cout << "eighty ";
			break;
		case 9:
			cout << "ninenty ";
			break;

		}
		if (a >= 10 && a < 20)
		{
			switch (a)
			{
			case 10:
				cout << "ten" << endl;
				break;
			case 11:
				cout << "eleven" << endl;
				break;
			case 12:
				cout << "twelve" << endl;
				break;
			case 13:
				cout << "thirteen" << endl;
				break;
			case 14:
				cout << "fourteen" << endl;
				break;
			case 15:
				cout << "fifteen" << endl;
				break;
			case 16:
				cout << "sixteen" << endl;
				break;
			case 17:
				cout << "seventeen" << endl;
				break;
			case 18:
				cout << "eighteen" << endl;
				break;
			case 19:
				cout << "nineteen" << endl;
				break;
			}
			c = 0;
		}
		switch (c)
		{
		case 1:
			cout << "one" << endl;
			break;
		case 2:
			cout << "two" << endl;
			break;
		case 3:
			cout << "three" << endl;
			break;
		case 4:
			cout << "four" << endl;
			break;
		case 5:
			cout << "five" << endl;
			break;
		case 6:
			cout << "six" << endl;
			break;
		case 7:
			cout << "seven" << endl;
			break;
		case 8:
			cout << "eight" << endl;
			break;
		case 9:
			cout << "nine" << endl;
			break;
		}


		system("pause");
		system("cls");
		cout << "Would you like to countinie?" << endl;
		cout << "1) Yes" << endl;
		cout << "2) No" << endl;
		cin >> z;
		system("pause");
		system("cls");
		if (z != 1)
		{
			cout << "Thank you very much!!!" << endl;

		}
		system("pause");

	}

	return 0;

}