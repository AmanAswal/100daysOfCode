#include<iostream>

using namespace std;

int pathfinder(int a, int b){	
	if(a==1 || b==1) return 1;

	return pathfinder(b,a-1) + pathfinder(a, b-1);
}

int main()
{
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"\nEnter b: ";
	cin>>b;
	int result = pathfinder(a,b);
	cout<<result<<endl;
	return 0;
}