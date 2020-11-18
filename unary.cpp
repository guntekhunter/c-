//unary haya memiliki satu operan 
//1. "+"= membuat nilai positif
//2. "-"= membuat nilai negatif
//3. "++"= increment
//a. pre increment sebelum variabel di aplikasikan
//b. post-increment kebaloikan
//4. "--"= decrement
#include <iostream>
using namespace std;
int main(){
	
	int x;
	float y;
	
	x = +7;
	y = -3.12;

	
	cout<<"nilai x :"<<x<<endl;
	cout<<"nilai x :"<<y<<endl;
	
	x = -x;
	y = -y;
	
	cout<<"nilai x yang baru :"<<x<<endl;
	cout<<"nilai x yang baru :"<<y<<endl;

	return 0;
} 
