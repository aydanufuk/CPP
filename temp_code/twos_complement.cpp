#include <iostream>
#define size 8
using namespace std;

int main(){
	int i = 0;
	int carry = 1;
	int fail = 0;
	char binary[size + 1];
	char ones[size + 1];
	char twos[size + 1];
	
	cout << "Input a " << size << " bit binary number: ";
	cin >> binary;
	
	for(i = 0;i < size; i++)
	{
		if(binary[i] == '1'){
		ones[i] = '0';}
		else if (binary[i] == '0'){
		ones[i] = '1';}
		else{
		cout <<"Assign bit error" << endl;
		fail = 1;
		break;
		}
	}
	
	ones[size] = '\0';
	
	for (int i = size - 1; i >= 0; i--){
		if(ones[i] == '1' && carry == 1)
			twos[i] = '0';
		else if (ones[i] == '0' && carry == 1){
			twos[i] = '1';
			carry = 0;
	}else{
		twos[i] = ones[i];
	}
	}
	
	twos[size] = '\0';
	
	
	
	
	if (fail == 0){
	cout << "the input binary number : "<< binary << endl;
	cout << "ones complement binary number : "<< ones << endl;
	cout << " After twos complement the value = " << twos << endl;}
	
	return 0;
}
