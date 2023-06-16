#include<iostream>
using namespace std;
int main(){
 int password;
 cout<<"Enter the password:";
 cin>>password;
 while(password<999999){
	cout<<"Password does not matches the required condition , enter the password again"<<endl;
	cin>>password;
 }
 cout<<"Now the password is correct"<<endl;
}
