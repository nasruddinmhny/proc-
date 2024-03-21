#include <iostream>
using namespace std;

main(){
	
	long long tarifsewa,lamasewa,totbayar;
	string nama;
	
	cout<<"Input Nama Penyewa = ";cin>>nama;
	cout<<"Input lama Sewa = ";cin>>lamasewa;
	cout<<"Input Tarif Sewa = ";cin>>tarifsewa;
	
	totbayar = lamasewa * tarifsewa;
	
	if (totbayar > 200){
		
		cout<<"Selamat Anda mendapatkan Diskon 50% "<<endl;
	}else{
		
		cout<<"Maaf anda Kurang beruntung.. Dsikon 0% "<<endl;
	}
	
	cout<<"====== STRUK PENYEWAAN ======"<<endl;
	cout<<"Nama Penyewa = "<<nama<<endl;
	cout<<"Total Bayar = "<<totbayar<<endl;
}
