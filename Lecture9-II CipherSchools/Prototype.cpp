#include<iostream>
using namespace std;
int sum(int a,int b ); // declared that sum function exists but the body is not formed yet ... can also be written as int sum(int ,int)
int main(){
	int a , b , c;
	a=1;
	b=8;
	c=sum(a,b);
	cout<<c;
}
int sum(int a,int b){
	return a+b;
}