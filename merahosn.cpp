#include<iostream>
using namespace std;

int merah(int x, int y, int z){
	int hasil = x % z;
	while (y > 0){
		hasil = (hasil + 1) % z;
		y--;
	}
	
	return hasil;
}

main(){
	
	//pemanggilan fungsi merah( 10,3,2)
	cout<<"Merah = "<<merah(10,3,2)<<endl;
}
