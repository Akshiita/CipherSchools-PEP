#include<iostream>
using namespace std;
int compare(int a, int b){
	if(a>b){
		return 1;
	}
	return 0;
}
int main(){
	int a,b;
	a=2;
	b=5;
	int c;
	c= compare(a,b);
	cout<<c;
}