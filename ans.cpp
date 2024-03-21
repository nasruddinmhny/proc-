#include<iostream>
using namespace std;

int merah(int q, int w, int e, int r){
	
	if (q < w){
		
		return 0;
	}else{
		
		return q + w + e + r;
	}
}

main(){
	
	int ans = 0;
	int n =69;
	
	ans += merah(n,1,n,1);
		
	cout<<"Hasil ans +=  "<<ans<<endl;
	
	ans -= merah(2 * n,2,n,2);
	
	cout<<"Hasil ans -=  "<<ans<<endl;

}
