#include<iostream>
using namespace std;
int main(){
	int i;
	char name[7];
    for(i=0;i<7;i++){
		cin>>name[i];
	}
	cout<<"Your name is "<<endl;
	for(i=0;i<7;i++){
		cout<<name[i];
	}
}