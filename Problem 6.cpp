#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int n=22,ctr=0,first=0,second=1,next;
 
   cout <<"Fibonacci Numbers:"<< endl;
   for (;ctr<n;ctr++)
   {
      if (ctr<=1)
         next=ctr;
      else
      {
         next=first+second;
         first=second;
         second=next;
      }
      cout<<next<<",";
   }
    system("pause");

	_getch();
	return 0;
}

