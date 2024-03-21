#include<iostream>
using namespace std;

main(){
	
	int m=30,n=10,hitunggenap,hitungganjil,totalBintang;
	
	
for (int i = 0; i < m; i++){
	if(i % 2 == 0){
		for(int j = 0; j < i; j++){
			cout<<"*";
			hitunggenap += 1;
			
		}
	}else{
		for(int j = 0; j < n; j++){
			cout<<"*";
			hitungganjil += 1;
		}
	}
}
totalBintang = hitunggenap + hitungganjil;
cout<<"jumlah Bintang genap = "<<hitunggenap<<endl;
cout<<"jumlah Bintang ganjil = "<<hitungganjil<<endl;
cout<<"Total Bintang = "<<totalBintang<<endl;

	
	
	
}

// saya sedang belajar
//saya sedang belajar
//saya sedang belajar
