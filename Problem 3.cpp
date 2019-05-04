#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int x;
    float v,z,y;
    z=2.5;
    
    cout<<"enter the value of x: ";
    	cin>>x;
    cout<<"enter the value of y: ";
    	cin>>y;

    
    switch(x)
    {
        case 1:
            if (y>1&&y<=5)
            {
                v=x*y*z;
                cout<<setw(10)<<setprecision(2)<<fixed<<showpoint<<"v="<<v;
                break;
            }
            else 
            {
                v=x+y/z;
                cout<<setw(10)<<setprecision(2)<<fixed<<showpoint<<"v="<<v;
                break;
            }
            
        case 2:
            if (y<=5)
            {
                v=fabs((x-y)/z);
                cout<<setw(10)<<setprecision(2)<<fixed<<showpoint<<"v="<<v;
                break;
            }
            else 
            {
                v=x-sqrt(y+z);
                cout<<setw(10)<<setprecision(2)<<fixed<<showpoint<<"v="<<v;
                break;
            }
        default:
            v=x+y+z;
            cout<<setw(10)<<setprecision(2)<<fixed<<showpoint<<"v="<<v;
            break;
    }
    system("pause");

	_getch();
	return 0;
}

