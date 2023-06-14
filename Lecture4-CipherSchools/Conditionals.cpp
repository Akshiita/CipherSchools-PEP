#include<iostream>
using namespace std;
int main(){
	int a , b;
	cout<<"Enter two integer values:"<<endl;
    cin>>a;
	cin>>b;
	//statement a >b
	cout<<(a>b);
	cout<<endl;
	// for 4 integers 
	int c , d;
	cout <<"Enter next values:"<<endl;
	cin>>c;
	cin>>d;
	cout<<(a>b && c>d)<<endl;
	cout<<(a>b || c>d);
	

}