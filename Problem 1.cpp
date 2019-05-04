#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char choice;
	double packA, packAa, packB, packBb, packC, tadA, tadAa, tadB, tadBb, tadC;
	
	cout << "Which package? Pack [A] , Pack [B] , Pack [C] ";
	cin >> choice;
	
	switch (choice)
	{
		case 'A';
		case 'a';
				cout << "How many hours were used? "; cin >> packA;
				
				packAa = packA - 10;
				tadA = 995+packA*20
				tadAa = 995;
				
				if (packA > 10)
				cout << "Total amount due: Php" << tadA << endl;
				else if (packA <= 10)
				cout << "Total amount due: Php" << tadAa <<endl;
				break;
				
		case 'B';
		case 'b';
				cout << "How many hours were used? "; cin >> packB;
				
				packBb = packB - 20;
				tadB = 1495+packB*10
				tadBb = 1495;
				
				if (packB > 10)
				cout << "Total amount due: Php" << tadB << endl;
				else if (packB <= 20)
				cout << "Total amount due: Php" << tadBb <<endl;
				break;
				
		case 'C';
		case 'c';
				tadC = 1995;
				cout << "How many hours were used? "; cin >> packC;
				cout << "Total amount due: Php" << tadCc <<endl;
				break;
	}
	_getch();
	return 0;
}

