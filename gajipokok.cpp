#include<iostream>
using namespace std;

main(){
	
	//7.00 double late 7.01 double 7 int
	double jamTiba,maksJamTelat,gajibersih,gajipokok,besarpotongan;
	
	gajipokok = 3100000;
	cout<<"Input Maksimal Jam Telat = "; cin>>maksJamTelat;
	cout<<"Input Jam Tiba Di Kantor = "; cin>>jamTiba;
	
	if(jamTiba >= maksJamTelat ){
		
		cout<<"Keterangan : Anda Terlambat, Gaji Pokok Di potong 2%"<<endl;
		gajibersih = gajipokok - (gajipokok * 0.02);
		besarpotongan = gajipokok * 0.02;
		cout<<"Potongan 2% = Rp. "<<besarpotongan<<endl;
		cout<<"Gaji Bersih = Rp. "<<gajibersih;
		
	}else{
		
		cout<<"Keterangan : Anda Tepat Waktu, gaji pokok tidak Dipotong"<<endl;
		gajibersih = gajipokok - (gajipokok * 0);
		besarpotongan = gajipokok * 0;
		cout<<"Potongan 2% = Rp. "<<besarpotongan<<endl;
		cout<<"Gaji Bersih = Rp. "<<gajibersih;
		
	}
}
