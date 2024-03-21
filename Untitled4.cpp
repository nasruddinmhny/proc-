#include<iostream>
using namespace std;

//1. function tambah
int tambah(int nilai1,int nilai2){

	int hasil = nilai1 + nilai2;
	
	return hasil;
}

main(){
	
	int a,b,hasil,hasilB;
	
	cout<<"Input Nilai a = ";cin>>a;
	cout<<"Input Nilai b = ";cin>>b;
	
	hasil = tambah(a,b);
	//hasilB = a / b;
	
	cout<<"Hasil Tambah = "<<hasil<<endl;
	//cout<<"Hasil Bagi = "<<hasilB;
}
