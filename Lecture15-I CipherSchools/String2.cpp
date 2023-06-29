#include<iostream>
using namespace std;
int main(){
	char name[1000];
	cout<<"Enter your name:(Note : Enter # after the end of your name)";
	int i=0;//initial value of i =0;
	while(1){ //here i is the previous input
		cin>>name[i];
		if(name[i]=='#') break;
		i++; // value of i increases
	}
	i=0; //again need to change the value of i to 0 before running the second while loop
	cout<<"Name you have entered is "<<endl;
	while(name[i]!='#'){
		cout<<name[i];
		i++;
	}
}