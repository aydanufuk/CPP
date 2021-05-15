#include <iostream>
using namespace std;
enum days {monday=1, tuesday, wednesday, thursday,friday,saturday,sunday};
typedef int marks;

//define monday = 1
//const int monday = 1
int main(){

	cout<<"monday: "<<monday<<endl;
	cout<<"tuesday: "<<tuesday<<endl;
	cout<<"wednesday: "<<wednesday<<endl;
	cout<<"thursday: "<<thursday<<endl;
	cout<<"friday: "<<friday<<endl;
	cout<<"saturday: "<<saturday<<endl;
	cout<<"sunday: "<<sunday<<endl;
	
	// m1 and m2 are for storing marks
	marks m1,m2;
	m1 = 50;
	m2 = 90;
	cout<<endl;
	cout<<"Marks"<<endl;
	cout<<"mark 1: "<<m1<<endl;
	cout<<"mark 2: "<<m2<<endl;
	
	
	
	
	
	return 0;
	
}
