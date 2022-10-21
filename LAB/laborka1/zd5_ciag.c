//W przedziale [ 2, n ] należy wyszukać wszystkie liczby pierwsze (ang. primes ).

#include<stdio.h>

int main(){

    for(int i = 2; i <= n; i++) {
      
       k=0;
      
          for(int j = 2; j <= i / 2; j++) {
            
              if (i % j == 0) {
                  k++;
              }
          
          }
      
        if (!k) {
           pritf("%d\n", i)
        }
      
     }
  
  return 0;
  
}
