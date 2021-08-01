#include <iostream>
using namespace std;

int main(){
	
	//const int x = 10;
	//x=30;
	
	const int x = 10;
	const int *ptr = &x;
	++*ptr;
	cout<<*ptr<<" "<<x<<endl;
	
	
	int * const ptr = &x;
	int y = 20;
	
	ptr =&y;//X
	
	//constant function cannot modify the member variables
	//reference parameters can be constant and their value cannot be changed
	// i.e. const int &a
	
	return 0;
}
