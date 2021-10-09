#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b,c,d;
	for(int i = 0;i<t;i++)
	{
	    cin>>a>>b>>c>>d;
	    if((a+b+c) <= d)
	    cout<<1<<endl;
	    else if((a+c) <=d)
	    cout<<2<<endl;
	    else if((a+b) <=d)
	    cout<<2<<endl;
	    else
	    cout<<3<<endl;
	    
	}
	return 0;
}
