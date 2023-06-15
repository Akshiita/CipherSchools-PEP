#include<iostream>
using namespace std;
int main(){
	// int i =1;
	// while(i<101){
	// 	cout<<i<<" ";
	// 	i++;
	// }

	int i ;
	int input;
	//guess the number 65
	// user has 100 chances
	for(i=0;i<100;i++){
		cin >> input;
		if(input ==65){
			cout<<"Correct Guess";
			break;
		}
	}
}