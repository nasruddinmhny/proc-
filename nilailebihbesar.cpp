#include<iostream>

using namespace std;

main(){
	
	int a, b,c;
	bool hasil,hasil1,hasil2,hasil3,hasil4,hasil5;
	
	a = 7;
	b = 7;
	c = 9;
	
	hasil = a > b; // 0 / False
	hasil1 = a >= b; // 1 / True
	hasil2 = c <= a; // 0 / False
	hasil3 = b < c ; // 0 / False
	hasil4 = a == b ; // 1 / True
	hasil5 = a != b; // 
	
	cout<< a <<" > "<< b <<" = "<<hasil<<endl;
	cout<< a <<" >= "<< b <<" = "<<hasil1<<endl;
	cout<< c <<" <= "<< a <<" = "<<hasil2<<endl;
	cout<< b <<" < "<< c <<" = "<<hasil3<<endl;
	cout<< a <<" == "<< b <<" = "<<hasil4<<endl;
	cout<< a <<" != "<< b <<" = "<<hasil5<<endl;
		
	
}
