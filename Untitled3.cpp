#include<iostream>
using namespace std;

int penjumlahan(int nilai1, int nilai2){
	
	int hasil = nilai1 + nilai2;
	
	return hasil;
}

void cetak(){
	
	cout<<"----------------"<<endl;
}

void cetak_nama(string nama){
	cout<<"Nama saya adalah "<<nama<<endl;
}


main(){
	
	int c,d,hasil;
	
	c = 3;
	d = 4;
	hasil = penjumlahan(c,d);
	cout<<"Hasil = "<<hasil;
	cetak();
	cetak_nama("Andri");
	
	
	//function and procedure
}
