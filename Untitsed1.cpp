#include<iostream>
using namespace std;

int bersih(int x, int y) { 
 	cout<<"func.bersih = nilai x + y = "<<x+y<<endl;
 
	 return x + y; 
} 
 
int hijau(int x, int y) { 
	cout<<"func. hijau = nilai x - y = "<<x-y<<endl;
 		cout<<"--------------------------"<<endl;
	 return x - y; 
} 
 
int berhiber(int x, int y) { 
	if(y == 0) { 
		return 0; 
	} else { 
		cout<<"nilai x - 1 = "<<x -1 <<" | nilai y -1 "<<y-1<<endl;
 		return bersih(x, y) + hijau(x, y) + berhiber(x - 1, y - 1); 
 		
 	} 
} 

main(){
	
	cout<<"hasil = "<<berhiber(20,15);
	
}
