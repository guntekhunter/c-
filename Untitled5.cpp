//unary haya memiliki satu operan 
//1. "+"= membuat nilai positif
//1. "-"= membuat nilai negatif
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
