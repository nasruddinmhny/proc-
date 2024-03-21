#include<iostream>
using namespace std;
int matika(int x);
int format(int x);

int info(int x) { 
 if(x == 0) { 
 	return 1; 
 } else { 
 	cout<<"Panggil Fungsi Info.. "<<endl;
 	cout<<"info = "<<info(x-1)<<" + format = "<< + format(x-1)<<endl;
 	cout<<endl;
 	return info(x - 1) + format(x - 1); 
 } 
} 
int format(int x) { 
 if(x == 0) { 
 	return 1; 
 } else { 
 	cout<<"Panggil Fugnsi Format.."<<endl;
 	cout<<"info = "<<info(x-1)<<" + matika = "<< + matika(x-1)<<endl;
 	cout<<endl;
 	return info(x - 1) + matika(x - 1); 
 } 
} 
int matika(int x) { 
 if(x == 0) { 
 	return 1; 
 } else { 
 	cout<<"Panggil Fungsi Matika.."<<endl;
 	cout<<"format = "<<format(x-1)<<" + matika = "<< + matika(x-1)<<endl;
 	cout<<endl;
 	return format(x - 1) + matika(x - 1); 
 } 
} 
main(){
	
	cout<<"Hasil = "<<info(2);
}
