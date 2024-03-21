#include<iostream>
using namespace std;

int info(int x) { 
 if(x == 0) { 
 	return 1; 
 } else { 
 	return info(x - 1) + format(x - 1); 
 } 
} 
 
int format(int x) { 
 if(x == 0) { 
 	return 1; 
 } else { 
 	return info(x - 1) + matika(x - 1); 
 } 
} 
 
int matika(int x) { 
 if(x == 0) { 
 	return 1; 
 } else { 
 	return format(x - 1) + matika(x - 1); 
 } 
} 

int main(){
	 
	 cout<<"Nilai = = "<<info(10);
	return 0;
}
