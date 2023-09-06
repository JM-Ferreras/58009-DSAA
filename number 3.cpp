#include <iostream>
using namespace std;
int main()
{
	int x[]={1,2,3,4,5,6,7,8,9,10};
	int pos = 1;
	int i;
	int	y=21;
	
	for (int i=11;i>=pos;i--)
	{

	if (i==1){
		x[pos]= y;
	}
	else{
		x[i-1]=x[i-2];
	}
}

	i=0;
	for (i=0; i<=9; i++)
{

	cout<<x[i]<<"\n";
}
	

	return 0;
}
