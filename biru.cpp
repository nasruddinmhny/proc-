#include<iostream>
using namespace std;

int hijau(int x, int y) { 
	cout<<"Panggil Fungsi Hijau.."<<endl;
    if (x < y) { 
    	  x = x + y; 
          y = x - y; 
          x = x - y; 
          cout<<" x = x + y | "<<x + y<<endl; 
          cout<<" x = x + y | "<<x - y<<endl; 
          cout<<" x = x - y | "<<x - y<<endl; 
    } 
 
    if (y == 0) { 
    	  cout<<"jika y == 0 | return x = "<<x<<endl;
          return x; 
    } 
    cout<<"return hijau = "<< hijau(x - y, y)<<endl;
    return hijau(x - y, y); 
} 
 
int merah(int q, int w, int e, int r) { 
	cout<<"Panggil Fungsi Merah.."<<endl;
    if (q < w) { 
          cout<<"jika q < w | return 0 "<<endl;
          return 0; 
    } 
    cout<<"Nilai q = "<<q<<"Nilai = w "<<w<<"Nilai e = "<<e<<"Nilai r = "<<r<<endl;
   
    cout<<"return hijau ("<<hijau(q, e)<<" + merah "<<merah(q - r, w, e, r)<<endl;
    return hijau(q, e) + merah(q - r, w, e, r); 
} 
 
int biru(int n) { 
	cout<<"Panggil Fungsi Biru.."<<endl;
     int ans = 0; 
     ans += merah(n, 1, n, 1); 
     ans -= merah(2 * n, 2, n, 2); 
     return ans * 3; 
} 

main(){
   cout<<"Hasil Biru = "<<biru(5)<<endl;
}
