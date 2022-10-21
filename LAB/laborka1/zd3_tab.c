//    Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale, x jest wybierany z tablicy X(n) 2022-10-11
#include<stdio.h>


int main (){

        double x[] = { 1.0, 2.0, 3.0};
        double a;
        int size;
        size = sizeof(x) / sizeof(x[0]);
        printf("%d", size);

        int n;
        do{     
                printf("wprowadz n");
                scanf("%d", &n);
        }
        while (n >= size)
        
        scanf("%lf", &a);

        printf("wynik %f\n", a * x[n] * x[n]);

        return 0;

}
