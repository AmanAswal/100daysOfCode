#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cout<<"Enter n: ";
    cin>>n;
    long int div=2, max;
    while(n!=0)
    {
        if(n%div!=0){
            div++;
        }
        else{
            max=n;
            n=n/div;
            if(n==1){
                cout<<max;
                break;
            }
        }
    }
    return 0;
}