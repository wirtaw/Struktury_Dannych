//Obliczyc funkcja y = ax^2 znaczenia, gdy a - stale. x - zmieniase z x0 do xn, krokiem hx 2022-10-11
#include<stdio.h>
#include<math.h>

int main (){
	
	int x,a,x0,xn,xh,i=0;
	
	printf("Wprowadz a\n");
	scanf("%d",&a);
	printf("Wprowadz x0\n");
	scanf("%d",&x0);
	printf("Wprowadz xn\n");
	scanf("%d",&xn);
	
	do{
		printf("Wprowadz xh\n");
		scanf("%d",&xh);
	}while (x0>xn || xn<0 )
	
	for (x = x0; x <= xn; x=x+xh){
	float k = a*pow(x, 2);
	printf("%d. ax^2 = %0.1f, x = %d, \n",i++, k, x);
	}
	return 0;

}
