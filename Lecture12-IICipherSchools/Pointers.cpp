#include<iostream>
using namespace std;
int main(){
	int a,b;
	int *p;
	int *q;
	
		p=&a;
	q=&b;
	a=5;
	b=6;
    int c = *p+*q;

	// a=1;
	// *p=3;
	// cout<<a<<endl;
	// cout<<p<<endl;
	// cout<<*p<<endl;
	// cout<<a<<endl;
	cout<<c;
}