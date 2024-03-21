#include<iostream>
using namespace std;

int hasil (int x){
	
	return x + tambah(x);
}

int tambah(int x){
	return x;
}


main(){
	
	cout<<"hasil = "<<hasil(5,6);
}
