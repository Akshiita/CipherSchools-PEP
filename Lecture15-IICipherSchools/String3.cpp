#include<iostream>
using namespace std;
int main(){
	string name;
	cin>>name;
	int i;
	for(i=0;i<7;i++){
		cout<<name[i]<<endl;
	}
}
//a string is a char array with a null character at the end "/0"