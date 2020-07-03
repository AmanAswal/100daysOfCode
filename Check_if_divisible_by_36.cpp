#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
using namespace std; 

bool isDivisible(cpp_int n){
    if(n%36==0)
        return true;
    else
        return false;
}

int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    cpp_int n;
	    cin>>n;
	    isDivisible(n)? cout<<1: cout<<0;
	    cout<<endl;
	}
	return 0;
}
