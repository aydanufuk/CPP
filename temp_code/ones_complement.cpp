#include <iostream>
#define size 8
using namespace std;

int main(){
	int i = 0;
	int fail = 0;
	char binary[size + 1];
	char comple[size + 1];
	
	cout << "Input a " << size << " bit binary number: ";
	cin >> binary;
	
	for(i = 0;i < size; i++)
	{
		if(binary[i] == '1'){
		comple[i] = '0';}
		else if (binary[i] == '0'){
		comple[i] = '1';}
		else{
		cout <<"Assign bit error" << endl;
		fail = 1;
		break;
		}
	}
	
	comple[size] = '\0';
	if (fail == 0){
	cout << "the input binary number : "<< binary << endl;
	cout << "ones complement binary number : "<< comple << endl;}
	
	return 0;
}
