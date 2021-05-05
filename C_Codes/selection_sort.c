#include <stdio.h>
int main(){
int ar [5]={5,2,3,4,1};
for(int i=0; i<5; i++){
  for ( int j =i+1;j<5; j++){
    if ( ar[ j]< ar[i] ){
    int temp = ar [i];
           ar[i] = ar[j];
           ar[j] = temp;
          } 
       }
     }
   for ( int i = 0; i <5;i++){
    printf("%d ", ar[ i]);
  }
}