#include<iostream>
using namespace std;
int sum(int a , int b){ //values of a and b are copied from main function
	int c ;
	c= a+b;
	a = 10;
	b =11;
	return c;
	return a;
	return b;
}
int main(){
	int a, b;
	a=9;
	b=5;
	int c;
	cout<<a<<" "<<b<<endl;
	c= sum(a,b);
	cout<<c<<endl;
	cout<<a<<" "<<b<<endl; //values of a and b remains same
	return 0;
}