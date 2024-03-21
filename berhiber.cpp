#include<iostream>
using namespace std;
int bersih(int x, int y) { 
 	return x + y; 
} 
int hijau(int x, int y) { 
 	return x - y; 
} 
int berhiber(int x, int y) { 

	if(y == 0) { 
		cout<<"Stop Rekursif"<<endl;
		return 0; 
		
	} else { 
		cout<<"Nilai x = "<<x<<endl;
		cout<<"Nilai y = "<<y<<endl;
		cout<<"Hasil = Bersih ("<<bersih(x,y)<< ") + hijau ("<<hijau(x,y)<<")"<<endl;
	
		cout<<"hasil Tambah bersih + Hijau = "<<bersih(x,y) + hijau(x,y)<<endl;
		
		return bersih(x, y) + hijau(x, y) + berhiber(x - 1, y - 1); 
	} 
	
} 
main(){
		cout<<"Hasil Berhiber = "<<berhiber(5,3);
}
