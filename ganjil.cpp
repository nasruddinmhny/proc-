#include<iostream>
using namespace std;

int cek( int a){
	
	for(int i = 1;i < a; i++){
		
		i += 2;
		if (i % 2 == 0){
			
			cout<<i <<" = "<<"Adalah Bilangan Genap"<<endl;
		}else{
			
			cout<<i <<" = "<<"adalah Bilangan ganjil"<<endl;
		}
		
	}
}
main(){
	

//jika pemanggilan fungsi cek (6)
cout<<"hasil cek = "<<cek(6);

}
