//operator ternary
//melibatkan 3 operant 
//1.
//2.
//3. 
#include <iostream>
using namespace std;
int main(){
	
	int x ;
	
	cout<<"Masukkan nilai x :"; cin>>x;
	cout<<endl;
	
	x = (x<0) ? -x-5 : -x;
	 
	cout<<"|x|="<<x;
	 
	return 0;
}
