#include<iostream>
using namespace std;

main(){
	
	// jika jam ketibaa <= 7 maka tidak terlambat 
	// 7.01 -> double, float
	
	double jamketibaan,maksimalJamTerlambat;
	
	cout<<"Input Maksimal Jam terlambat = "; cin>>maksimalJamTerlambat;
	cout<<"Input Jam Ketibaan = "; cin>>jamketibaan;
	
	if (jamketibaan <= maksimalJamTerlambat){
		
		cout<<"Anda Tepat Waktu";
		
	}else{
		
		cout<<"Mohon Maaf Anda Terlambat datang ke sekolah";
	}
	
	
}
