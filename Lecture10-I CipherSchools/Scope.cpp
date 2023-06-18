#include<iostream>
using namespace std;
void PrintHi(){
	cout<<"Hi"<<endl;
}
int sum(int a , int b){ //formal parameters
	int c;
	int d;
	d=a+b;
	c=200;
	
	cout<<c<<endl;
	return d;
}
int main(){
	PrintHi();
	int a , b , c , d;
	c=155;
	a=10;
	b=12;
	d=sum(a,b); //actual parameters
	cout<<d<<endl;
	cout<<c<<endl;
}
//scope of variables is local for every function
//if we don't define int d in sum function , it will give error that d is not defined in sum function hence we need to define it by writing int d again