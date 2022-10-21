//leży obliczyć n-ty wyraz ciągu Fibonacciego. W przedziale [ 2, n ] należy wyszukać wszystkie liczby pierwsze (ang. primes ).

#include<stdio.h>

int nwd(int a, int b)
{
    if (a == 0)
        return b;
    return nwd(b % a, a);
}
 
int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("NWD(%d, %d) = %d\n", a, b, nwd(a, b));

    return 0;
}
