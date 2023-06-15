#include<iostream>
using namespace std;
int main()
{
	float a , b;
	cout<<"Enter two floating numbers"<<endl;
	cin>>a;
	cin>>b;
	if(a>0.01 && b>a){
		cout<<"Condition is true";
	}
	else{
		cout<<"Condition is false";
	}

}