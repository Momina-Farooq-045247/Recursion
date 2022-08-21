#include <iostream>
using namespace std;

int print(int n)
{
	//n=1;
	cout<<n;
	if(n<10)
	{
		cout<<endl;
		print(n+1);
	}
}
int main()
{
	print(1);
	return 0;
}
