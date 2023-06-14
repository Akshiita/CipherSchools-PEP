#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter a integer";
	cin>>a;
	switch(a){
		case 1:
		cout<<"Value is 1";
		break;
		case 2:
		cout<<"Value is 2 ";
		break;
		default:
		cout<<"Default is always printed";
		break;
	}

}