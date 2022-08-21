#include <iostream>
using namespace std;

int f(int n)
{
	if(n<2)
	{
		return 0;
	}
	else
	{
		cout<<"Hello"<<endl;
		return f(n-2)*f(n-3);
	}
}
int main()
{
	f(10);
	return 0;
}
