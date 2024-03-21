#include<iostream>
using namespace std;

main(){
	
	string mapel;
	
	cout<<"==== Mapel Favorit ===="<<endl;
	cout<<"1.mat 2.bi 3.ti"<<endl;
	
	cout<<"Input Mata pelajaran Favorit = "; cin>>mapel;
	
	//kondisi pertama untuk mat
	if(mapel == "mat"){
		cout<<"Saya suka dengan matematika";
				
	}else if(mapel == "bi"){// kondisi kedua untuk bi
		cout<<"Saya senang belajar bahasa inggris";
		
	}else if(mapel == "ti"){// kondisi ketiga untuk ti
		cout<<"saya suka dengan teknologi oleh karena itu saya suka ti";
	}else{
		cout<<mapel<<" Tidak ada dalam pilihan ";
	}
}
