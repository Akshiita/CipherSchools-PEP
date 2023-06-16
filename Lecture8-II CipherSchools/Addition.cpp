#include<iostream>
using namespace std;
int sum(int a , int b){
	int c;
	c= a+b;
	return c;
}
int main(){
int a ,b;
a=5;
b=7;
int add = sum(a,b);
cout<<add;
}