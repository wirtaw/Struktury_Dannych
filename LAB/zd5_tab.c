//Obliczenie sumy, ilosci i mnozenia elementow tablicy.

#include<stdio.h>
#include<stdlib.h>


int main (){

        double x[] = { 1.0, 2.0, 3.0};
        double a;
        int size;
        double *y, sumx=0.0, multx=1.0, sumy=0.0, multy=1.0;

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
                sumx += x[i];
                sumy += y[i];
                multx*= x[i];
                multy *= y[i];

        }

        printf("sum x %lf\n", sumx);
        printf("sum y %lf\n", sumy);
        printf("mult x %lf\n", multx);
        printf("mult x %lf\n", multy);
        printf("wynik %f\n", a * x[n] * x[n]);
        
        free(y);
        
        return 0;

}
