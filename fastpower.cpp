#include<iostream>

using namespace std;

int fastpower(int a, int b){	
	if(b==0) return 1;
	if(b%2==0) return fastpower(a*a, b/2);
	return a*fastpower(a,b-1);
}

int main()
{
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"\nEnter b: ";
	cin>>b;
	int result = fastpower(a,b);
	cout<<result<<endl;
	return 0;
}