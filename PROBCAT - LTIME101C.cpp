#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n;
	for(int i = 0;i<t;i++)
	{
	    cin>>n;
	    if(n >= 1 && n<100)
	    cout<<"Easy"<<endl;
	    else if(n >= 100 && n < 200)
	    cout<<"Medium"<<endl;
	    else if(n>=200 && n<=300)
	    cout<<"Hard"<<endl;
	    
	}
	return 0;
}
