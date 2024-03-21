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
	 		return 0; 
	 	} else { 
	 		return bersih(x, y) + hijau(x, y) + berhiber(x - 1, y - 1); 
 		} 
 	}
 	
main(){
	
	int a,b;
	a=5;
	b= 3;
	
	cout<<"Hasil Bersih = "<<bersih(a,b)<<endl;
	cout<<"Hasil Hijau = "<<hijau(a,b)<<endl;
	cout<<"Hasil Berhiber = "<<berhiber(a,b)<<endl;
	
	
}

