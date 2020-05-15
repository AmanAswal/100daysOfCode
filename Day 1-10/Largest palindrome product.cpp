#include<iostream>

using namespace std;

bool isValid(int);

bool isValid(int num)
{
    bool status=true;
    int remainder, digit, reverse=0;
    digit=num;
    while(num!=0)
    {
        remainder = num%10;
        num /= 10;
        reverse= reverse*10+remainder;
    }
    if(reverse==digit){
        status=true;
    }
    else{
        status=false;
    }
    return status;
}

int main()
{
    int product, final=0;
    for(int i=999; i>=100;i--)
    {
        for(int j=999;j>=100;j--)
        {
            product = i*j;
            if(isValid(product))
            {
                if(product>final){
                    final=product;
                }
            }
        }
    }
    cout<<final;
    return 0;
}