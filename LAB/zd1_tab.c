//Obliczyc funkcja y = ax^2 znaczenia, gdy a ir x zmeniajan sie jednoczesnie: a z 1 krokiem 0.5, x - z 2 do 6 krokiem 2 200-10-11

#include<stdio.h>
#include<math.h>

int func (float a, int x){
	int i;
	for (i = 0; i <= 3; i++){
	float k = a* pow(x, 2);
	printf("%0.1f\n",k);
	a=a+0.5;
	x=x+2;
	}

}


int main (){
	
	func(1.0,2);

}
