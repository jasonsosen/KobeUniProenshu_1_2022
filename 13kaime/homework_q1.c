// homework1.c
#include <stdio.h>

void matvec(A, v, w, n){
  int i,j;
  
  for(){
       for(){
           w[ ] = w [ ] + A[ ][ ]*v[ ]; 
       }
   }
    
   return;
}

int main(void){
   int i,j;
   int A   ={{1,2},{3,4}} ;//2x2行列を保存するための，2次元の配列を宣言せよ．
   int v  ={5,6};//2次元のベクトルを保存するための，１次元の配列を宣言せよ．
   int w ;//2次元のベクトルを保存するための，１次元の配列を宣言せよ．
   matvec(A, v, w, 2);
   printf("%d, %d\n", w[0], w[1]);
   return 0; 
}

