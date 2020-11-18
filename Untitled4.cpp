//operator 
//1. aritmatika
//a. perkalian = *
//b. pembagian =/
//c. pengurangan = -
//2. modulus = %
#include <iostream>
using namespace std;
int main(){
	
	int a =9,b =3;
	int z,g,h,i,j;
	
	z = a+b;
	g = a%b;
	h = a-b;
	i = a*b;
	j = a/b;
	
	cout<<a<<"+"<<b<<"="<<z<<endl;
	cout<<a<<"%"<<b<<"="<<g<<endl;
	cout<<a<<"-"<<b<<"="<<h<<endl;
	cout<<a<<"*"<<b<<"="<<i<<endl;
	cout<<a<<"/"<<b<<"="<<j<<endl;
	return 0;
}
