#include <iostream>
using namespace std;
int main()
{
 int x[]={1,2,3,4,5};
 int y[4];
 int z=4;
 int i;
 cout<<"Original set: ";
 for (i=0; i<=z; i++)
 {
 	cout<<x[i];
 }
 
 cout<<"\nReversed set: ";
 for (i=0; i<=z; i++)
 	{
 	y[i]=x[z-i];
 	cout<<y[i];
	}
	return 0;
}
