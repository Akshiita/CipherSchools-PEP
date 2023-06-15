#include<iostream>
using namespace std;
int main(){
	int a[4]; //this means it is an array of name a which can store multiple integers, 
	//Note : Indexing of an array starts from 0
  cout<<"Give 5 integers:"<<endl;
  int i;
  for( i=0;i<5;i++){
	cin>>a[i];
  }
 cout<<"Given integers are:"<<endl;
 for(i=0;i<5;i++){
	cout<<a[i]<<" ";

 }
}