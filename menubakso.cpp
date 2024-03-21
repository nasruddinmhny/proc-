#include<iostream>
using namespace std;

main(){
	
	double jumlahporsi,hargabakso,totalbayar,totaldiskon,totalbayarsetelahdiskon;
	string makanan,member;
	
	cout<<"Apakah Anda Member Bakso Nuklir = ";cin>>member;
	cout<<"Input Menu Makanan = ";cin>>makanan;
	cout<<"Input Jumlah Porsi = ";cin>>jumlahporsi;
	cout<<"Input harga Bakso = ";cin>>hargabakso;
	
	//totaldiskon = totalbayar * diskon 
	totalbayar = jumlahporsi * hargabakso;
	
	if(member == "y"){
		//dapat diskon 2%
		totaldiskon = totalbayar * 0.2;
		totalbayarsetelahdiskon = totalbayar - totaldiskon;
	}else{
		totaldiskon = 0;
		totalbayarsetelahdiskon = totalbayar - totaldiskon;
	}
	
	cout<<"===== STRUK ======"<<endl;
	cout<<"Makanan = "<<makanan<<endl;
	cout<<"Jumlah Porsi = "<<jumlahporsi<<endl;
	cout<<"Harga Bakso = "<<hargabakso<<endl;	
	cout<<"TOtal Bayar = "<<totalbayar<<endl;
	cout<<"total Diskon = "<<totaldiskon<<endl;
	cout<<"total Bayar Setelah DIskon = "<<totalbayarsetelahdiskon<<endl;
}
