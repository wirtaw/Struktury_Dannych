//Generowanie liczb pseudolosowych 2022-10-11

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdint.h>

int main (){
	
	int i, count=20;
	time_t czas;
	czas = time(NULL);
	
	srand((unsigned) time(&czas));
	 
	for (i = 0; i <= count; i++){
	printf("%d\n", rand()%50);
	}
	
	getch();
	
	return 0;
}

