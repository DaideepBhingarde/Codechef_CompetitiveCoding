#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;
	cout<<"\n";
	int D;
	int L, R;
	
	
	for(int i = 0;i<N;i++)
	{
	    D=L=R =0;
	    cin>>D;
	    cin>>L;
	    cin>>R;
	    
	if(D<L)
	cout<<"Too Early \n";
	else if(D==L || D ==R)
	cout<<"Take second dose now \n";
	else if(D>L && D<R)
	cout<<"Take second dose now \n";
	else if(D>=R)
	cout<<"Too Late \n";
	
	}
	
	
	
	
	
	
	
	return 0;
}
