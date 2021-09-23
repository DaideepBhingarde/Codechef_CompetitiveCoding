#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T = 0, count = 0;
	int i[8];
	
	cin>>T;
	
	for(int j=1; j<=T ;j++)
	{
	    count=0;
	    for(int q = 0; q<7 ; q++)
	    {
	        cin>>i[q];
	        
	        
	    }
	   
	    for(int l=0;l<7;l++)
	    {
	        if(i[l] == 1)
	        {
	        count++;
	        }
	    }
	    
	    if(count >= 4)
	     cout<<"yes";
	    else
	     cout<<"no";
	    
	    cout<<"\n";
	}
	
	
	return 0;
}
