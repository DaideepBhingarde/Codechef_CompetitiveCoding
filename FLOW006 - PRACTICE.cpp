#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	int N;
	int sum;
	for(int i = 0; i<T;i++)
	{
	    sum =0;
	    cin>>N;
	    while(N>0)
	    {
	        
	        sum = sum + (N%10);
	        N = N/10;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
