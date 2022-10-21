//Należy obliczyć n-ty wyraz ciągu Fibonacciego.
//W przedziale [ 2, n ] należy wyszukać wszystkie liczby pierwsze (ang. primes ).

#include<stdio.h>

int fibb_n(int n)
{
    int prev = 1, curr = 1, next, tmp;

    if ((n == 1) || (n == 2)) {

        return 1;

    }else{

        for (int i = 0; i < n - 2; i++){

            next = prev + curr;
            prev = curr;
            curr = next;
           
        }

        return next;
    }
}
 
int main()
{
    int n;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){

        printf("%d\n", fibb_n(i));

    }

    return 0;
}
