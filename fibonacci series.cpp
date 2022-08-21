#include <iostream>
using namespace std;

int f(int n)
{
	if (n==0||n==1)
	{
		return 1;
	}
	else
	{
		return f(n-2)+f(n-1);
	}
}
int main()
{
	cout<<f(5);
	return 0;
}
