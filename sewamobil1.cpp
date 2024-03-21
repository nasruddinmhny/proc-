#include<iostream>
using namespace std;

main(){
	
	string jenisMobil,member;
	int lamaSewa,hargaSewa,totalBayar,totalPotongan;
	
	cout<<"Input Jenis Mobil = ";cin>>jenisMobil;
	cout<<"input lama sewa = ";cin>>lamaSewa;
	cout<<"Apakah Anda Member [y/t] = ";cin>>member;

	
	if(jenisMobil == "avanza"){
		
		hargaSewa = 350000;
		totalBayar = hargaSewa * lamaSewa;
		if((totalBayar > 1000000) && (member == "y")){
		
		totalPotongan = totalBayar - (totalBayar * 0.05);
		}else if ((totalBayar > 1000000) && (member == "t")){
			
			totalPotongan = totalBayar - (totalBayar * 0.02);
		}else{
			totalPotongan = totalBayar - (totalBayar * 0);
		}
		
	}else if(jenisMobil == "fortuner"){
		
		hargaSewa = 500000;
		totalBayar = hargaSewa * lamaSewa;
	}else if(jenisMobil == "innova"){
		
		hargaSewa = 400000;
		totalBayar = hargaSewa * lamaSewa;
	}
	
	//if untuk cari potongan

	if((totalBayar > 1000000) && (member == "y")){
		
		totalPotongan = totalBayar - (totalBayar * 0.05);
	}else if ((totalBayar > 1000000) && (member == "t")){
		
		totalPotongan = totalBayar - (totalBayar * 0.02);
	}else{
		totalPotongan = totalBayar - (totalBayar * 0);
	}
	
	
	cout<<"==== INFORMASI PENYEWAAN ===="<<endl;
	cout<<" Mobil = "<<jenisMobil<<endl;
	cout<<"Harga Sewa = "<<hargaSewa<<endl;
	cout<<"Lama Sewa  = "<<lamaSewa<<endl;
	cout<<"Total Bayar = "<<totalBayar<<endl;
	cout<<"Total Potongan = "<<totalPotongan<<endl;
}
