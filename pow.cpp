#include <iostream>
using namespace std;

int pow(int x,int y)
{
	int res=1;
	for(int i=0;i<y;i++)
	{
		res *=x;
	}
	return res;
}
int main()
{
	cout<<pow(2,5);
	return 0;
}
