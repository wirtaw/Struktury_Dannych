//    Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n) 2022-10-11
#include<math.h>
#include<stdio.h>


int main (){

        double x[] = { 1.0, 2.0, 3.0};
        double a;
        int size;
        size = sizeof(x) / sizeof(x[0]);
        printf("%d", size);

        int n;
        scanf("%d", &n);
        if (n >= size){
                printf("n > ilosc elementow w tablicy");
                exit(1);
        }
        scanf("%lf", &a);




        printf("wynik %f\n", a * x[n] * x[n]);


        return 0;

}
