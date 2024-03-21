#include<iostream>
using namespace std;
int format(int x);
int matika(int x);

int info(int x) { 
	if(x == 0) { 
	 	return 1; 
	} else { 
		
	 	return info(x - 1) + format(x - 1); 
	 	//return 0;
	} 
} 
 
int format(int x) { 
	if(x == 0) { 
	 	return 1; 
	} else { 
		
	 	return info(x - 1) + matika(x - 1); 
	 	//return 0;
	} 
} 
 
int matika(int x) { 
	if(x == 0) { 
	 	return 1; 
	} else { 
	
	 	return format(x - 1) + matika(x - 1); 
	} 
} 

main(){
	
	for(int i = 0; i <= 9; i++){
		cout<<"hasil info "<<i<<" = "<<info(i)<<endl;
		cout<<"hasil format "<<i<<" = "<<format(i)<<endl;
		cout<<"hasil matika "<<i<<" = "<<matika(i)<<endl;
		cout<<"------------------------------------"<<endl;
	}
	
	
	
	cout<<"---------------------------------"<<endl;
	cout<<"hasil info 2 = "<<info(2)<<endl;
	cout<<"hasil info 3 = "<<info(3)<<endl;
	cout<<"hasil info 4 = "<<info(4)<<endl;	
	cout<<"hasil info 5 = "<<info(5)<<endl;
	cout<<"hasil info 6 = "<<info(6)<<endl;
	cout<<"hasil info 7 = "<<info(7)<<endl;
	cout<<"hasil info 8 = "<<info(8)<<endl;	
	cout<<"hasil info 9 = "<<info(9)<<endl;
}
