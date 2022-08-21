#include <iostream>
using namespace std;

int mul(int x,int y)
{
	if (y==1)
	{
		return x;
	}
	else
	{
		return x + mul(x,y-1);
	}
}
int main()
{
	cout<<mul(2,5);
}
