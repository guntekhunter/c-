//a. pre increment sebelum variabel di aplikasikan
//b. post-increment stelah operan dilakukan
#include <iostream>
using namespace std;
int main(){
	
	int x;
	x= 7;

	
	cout<<"nilai x awal :"<<x<<endl;
	//tampil setelah ini
	cout<<"nilai ++x :"<<++x<<endl;
	cout<<"nilai x akhir :"<<x<<endl<<endl;
	
	x = 10;
	
	cout<<"nilai x awal :"<<x<<endl;
	cout<<"nilai x++ :"<<x++<<endl;
	//baru tampil setelh ini
	cout<<"nilai x akhir :"<<x<<endl<<endl;
	return 0;
} 
