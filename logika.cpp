//operator logika
//1. true = && 1 jika keduanya 1
//a. and :
// - jika salah 1 sama dengan 1 maka hasilnya 1
// - jika keduanya 1 maka hasilnya 1
//b. 
//2. false = || 1 jika kedua atau satu inputnya = 1
//3. not = ! 
//tipe data bolean(bol)
#include <iostream>
using namespace std;
int main(){
	 

	 
	cout<<"0 || 0 ="<<(0||0)<< "0 || 0 ="<<(0||0)<<   
	cout<<"0 || 0 ="<<(0||0)<< "0 || 1 ="<<(0||1)<<
	cout<<"0 || 1 ="<<(0||1)<< "1 || 0 ="<<(1||0)<<
	cout<<"0 || 1 ="<<(0||1)<< "1 || 1 ="<<(1||1)<<
	cout<<"1 || 0 ="<<(1||0)<< "0 || 0 ="<<(0||0)<<
	cout<<"1 || 0 ="<<(1||0)<< "0 || 1 ="<<(0||1)<<
	cout<<"1 || 1 ="<<(1||1)<< "1 || 0 ="<<(1||0)<<
	cout<<"1 || 1 ="<<(1||1)<< "1 || 1 ="<<(1||1)<<
	
	endl;
	
	cout<<"0 || 0 ="<<(0||0)<<"and"<<"0 || 0 ="<<(0||0);
	cout<<"0 || 0 ="<<(0||0)<<"and";cout<<"0 || 1 ="<<(0||1);
	cout<<"0 || 1 ="<<(0||1)<<"and";cout<<"1 || 0 ="<<(1||0);
	cout<<"0 || 1 ="<<(0||1)<<"and";cout<<"1 || 1 ="<<(1||1);
	cout<<"1 || 0 ="<<(1||0)<<"and";cout<<"1 || 1 ="<<(1||1);
	cout<<"1 || 0 ="<<(1||0)<<"and";cout<<"0 || 1 ="<<(0||1);
	cout<<"1 || 1 ="<<(1||1)<<"and";cout<<"1 || 0 ="<<(1||0);
	cout<<"1 || 1 ="<<(1||1)<<"and";cout<<"1 || 1 ="<<(1||1);
	
	return 0;
	
	
}
