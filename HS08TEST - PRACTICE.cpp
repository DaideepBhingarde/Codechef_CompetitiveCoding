#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int xx;
	double yy;
	cin>>xx>>yy;
       
        if(((xx%5)==0) && (yy>=xx+0.50))
    {
        cout<<yy-xx-0.50;
    }
    else
    {
        cout<<yy;
    }
	return 0;
	
	
	
}
