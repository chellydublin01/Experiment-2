#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char choice;
	double billY, billN, demandCH, consCH, lateCH, preM, recM;
	
	demandCH = 35;
	consCH = 1.10;
	lateCH = 20;
	
	cout << "Enter your previous meter reading: " cin >> preM;
	cout << "Enter your recent meter reading: " cin >> recM;
	cout << "Did you pay your previous bill? [Y] Yes or [N] No "; cin >> choice;
	
	switch (choice)
{
	case 'Y';
	case 'y';
		billY = (demandCH + recM * consCH)
		cout << "Your balance is Php" << billY << endl;
		break;
		
	case 'N';
	case 'n';
		billN = (demandCH + preM * consCH) + (demandCH + recM * consCH) + lateCH;
		cout << "Your balance is Php" << billN << endl;
		break;
}
	_getch();
	return 0;
}

