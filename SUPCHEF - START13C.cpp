#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T;
	int M,N,K;
	cin>>T;
	
	for(int i = 0; i<T ;i++)
	{
	    cin>>M>>N>>K;
	    
        if((N*K) < M)
        cout<<"YES \n";
        else
        cout<<"NO \n";
	}
	return 0;
}
