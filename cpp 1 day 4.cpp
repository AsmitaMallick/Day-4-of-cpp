#include<iostream>
using namespace std;
int main(){
	//***********Manipulators*************
	int a=8, b=3, c=6;
	cout<<"the value of a without setw is: "<<a;
	cout<<"the value of b without setw is: "<<b;
	cout<<"the value of c without setw is: "<<c;
	cout<<"the value of a setw is: "<<setw(4)<<a;//here the value of a will be printed keeping a gap of 4 bits.
	cout<<"the value of b setw is: "<<setw(4)<<b;
	cout<<"the value of c setw is: "<<setw(4)<<c;
	
	
	
	return 0;
}
