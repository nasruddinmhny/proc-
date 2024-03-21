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
	 	cout<<"akhir dari rekursif"<<endl;
	 	return 0; 
	 } else { 
	 	cout<<"rekursif "<<bersih(x, y) + hijau(x, y) + berhiber(x - 1, y - 1)<<endl;	
	 	return bersih(x, y) + hijau(x, y) + berhiber(x - 1, y - 1); 
	 } 
} 

main(){
	
	int a,b;
	a=10;
	b= 5;
	cout<<"hasil : "<<berhiber(a,b);
}
