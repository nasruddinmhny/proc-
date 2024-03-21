#include<iostream>

using namespace std;

int merah(int q, int w, int e) { 
     if (q < w) { 
     	cout<<"akhir rekursif..."<<endl;
        return 0; 
     } 
     cout<<"nilai q = "<<q<<endl;
     cout<<"nilai w = "<<w<<endl;
     cout<<"nilai e = "<<e<<endl;
      cout<<"Nilai q - e = "<<q - e<<endl;
      cout<<"-----------------------------"<<endl;
     cout<<"Hasil = "<<2 <<" + "<< + merah(q - e, w, e)<<"->  nilai q - e = "<<q-e<<"-> nilai w = "<<w<<"-> nilai e ="<<e<<endl;
    
     return 2 + merah(q - e, w, e); 
} 

main(){
	
	cout<<"Hasil Merah = "<<merah(3,1,1)<<endl;
}
