#include <iostream>
using namespace std;

int power_calc(int n,int power){
    int product=1;
    
    for(int i = 0;i<power;i++){
        product *= n;
    }
    
    return product;
}

int main(){
    
int i = 0;
int count = 0;
int rem = 0;
int sum = 0;

cout << "Enter a number: ";
cin >> i ;

int num = i;

//counting the digits
while(i>0){
    i = i / 10;
    count++;}
i = num;
while(i >0)
{
    rem = i%10;
    sum = sum + power_calc(rem,count);
    i = i/10;
}
if(num == sum)
    cout <<"\narmstrong number!\n";
else
    cout <<"\nnot an armstrong number!\n"; 


return 0;}
