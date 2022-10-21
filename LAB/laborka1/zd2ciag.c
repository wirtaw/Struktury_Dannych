//Należy wygenerować n kolejnych wyrazów ciągu arytmetycznego.

#include<stdio.h>

int main (){
    
    int n, a, x;

    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &x);

    for(int i = 0; i < n; i++){

        printf("%d\n", a);
        a += x;

    }

	return 0;
}
