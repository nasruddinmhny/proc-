#include<iostream>
using namespace std;


int hijau(int x, int y) { 
     if (x < y) { 
          x = x + y; 
          y = x - y; 
          x = x - y; 
     } 
 
     if (y == 0) { 
          return x; 
     } 
      
     return hijau(x - y, y); 
} 
 
int merah(int q, int w, int e, int r) { 
     if (q < w) { 
          return 0; 
     } 
     cout<<"hasil merah = "<<hijau(q, e) + merah(q - r, w, e, r)<<endl;
     return hijau(q, e) + merah(q - r, w, e, r); 
} 
 
int biru(int n) { 
     int ans = 0; 
     ans += merah(n, 1, n, 1); 
     ans -= merah(2 * n, 2, n, 2); 
     return ans * 3; 
}

main(){
	
	cout<<"Hasil Biru = "<<biru(69)<<endl;
}
