#include<iostream>
#include<cmath>
using namespace std;

int gcd(int a, int b){
	return b==0? a: gcd(b,a%b);
}

int lcm(int a, int b,int gcd_value){
	return (a*b)/gcd_value;
}

int main()
{	
	int a=12, b=20;
	int gcd_value = gcd(a,b);
	int lcm_value = lcm(a,b,gcd_value);
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd_value<<endl;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<lcm_value;
	return 0;
}