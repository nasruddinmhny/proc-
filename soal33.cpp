#include<iostream>
using namespace std;

int bersih(int x, int y) { 
 	//cout<<"func.bersih -> nilai x = "<<x<<endl;
	//cout<<"func.bersih -> nilai y = "<<y<<endl;
	//cout<<"Hasil x + y = "<<x+y<<endl;
 
	 return x + y; 
} 
 
int hijau(int x, int y) { 
	//cout<<"func.hijau -> nilai x = "<<x<<endl;
	//cout<<"func.hijau -> nilai y = "<<y<<endl;
	//cout<<"Hasil x - y = "<<x-y<<endl;
	 return x - y; 
} 
 
int berhiber(int x, int y) { 
	if(y == 0) { 
		cout<<"akhir rekursif"<<endl;
		return 0; 
		
	} else { 
		cout<<"Nilai x = "<<x<<"|| Nilai y = "<<y<<endl;
		cout<<"return hasil = "<<bersih(x, y) + hijau(x, y)<<endl;
		cout<<"nilai x - 1 = "<<x -1 <<" || nilai y - 1 = "<<y -1<<endl;
		//cout<<"Return Berhiber = "<<berhiber(x - 1, y - 1)<<endl;
		cout<<"--------------------------"<<endl;
 		return bersih(x, y) + hijau(x, y) + berhiber(x - 1, y - 1); 
 		
 	} 
} 

main(){
	
	cout<<"hasil = "<<berhiber(5,3);
	
}
