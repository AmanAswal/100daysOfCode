#include<iostream>
using namespace std;

int main()
{
	int sum=0,sum2=0, sq_sum=0;

	for(int i=1; i<=100; i++)
	{
		sum2 = sum2 + i;
		sq_sum = sum2*sum2;
		sum=sum + i*i;
	}
	cout<<sq_sum-sum;
	return 0;
}