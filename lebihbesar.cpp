#include<iostream>

using namespace std;

void say_hello(){
	cout<<"hello sayang";
}

int tambah(int bil1, int bil2){
	int hasil = bil1 + bil2;
}
main(){
	
	int a = 8 , b = 4;
	bool hasil;
	
	hasil = a > b;
	
	cout<<"Hasil = "<<hasil;
	cout<<"hasil tambah bilangan "<<a<<" "<<b<<" = "<<tambah(a,b);
	
	say_hello();
}
