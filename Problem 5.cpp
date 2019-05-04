#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int ctr=0;
    cout<<"Counting..."<<endl;
    while(ctr<=30)
    {
        ctr++;
        if(ctr<=10)
        {
            cout<<ctr<<",";
        }
        if(ctr>10&&ctr%2==0)
        {
            cout<<ctr<<",";
        }
    }
    system ("pause");

	_getch();
	return 0;
}

