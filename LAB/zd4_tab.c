#include<stdio.h>
#include<stdlib.h>


int main (){

        double x[] = { 1.0, 2.0, 3.0};
        double a;
        int size;
        double *y;

        size = sizeof(x) / sizeof(x[0]);
        printf("%d", size);

        y = malloc(size*sizeof(double));

        int n;
        scanf("%d", &n);

        if (n >= size){
                printf("n > ilosc elementow w tablicy");
                exit(1);
        }

        scanf("%lf", &a);

        for (int i = 0; i < size; i++){

                y[i] = a*x[i]*x[i];
                printf("%lf\n", y[i]);

        }


        printf("wynik %f\n", a * x[n] * x[n]);


        return 0;

}

