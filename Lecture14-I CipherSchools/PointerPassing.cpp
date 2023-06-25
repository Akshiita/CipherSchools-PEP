#include<iostream>
using namespace std;
void swap(int *x , int *y){
	int c ;
	c =*x;
	*x=*y;
	*y=c;
	cout<<"Swapping complete!"<<endl;
}
int main(){
	int a , b;
	a=5;
	b=9;
	swap(&a,&b);
	cout<<"Values after swapping are: "<<a<<" "<<b<<endl;
}
//we are copying the addresses and then de-refering them to get the actual values.
//still we are copying the address but now the actual values are also being changed.