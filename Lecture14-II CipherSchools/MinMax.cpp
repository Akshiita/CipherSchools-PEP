#include<iostream>
using namespace std;
void minmax(int *a,int *min , int *max){
//whatever we change to *min ,*max inside the function , it will get affected outside the function too.
int i ;
int large = a[0];
int small=a[0];
for(i=1;i<6;i++){
	if(a[i]>large){
		large = a[i];
	}
	if(a[i]<small){
		small = a[i];
	}
}
}
int main(){
	int a[5];
	int max,min;
	int i;
	for(i=0;i<6;i++){
		a[i] =i;
		
	}
	minmax(a,&min,&max);
	
}