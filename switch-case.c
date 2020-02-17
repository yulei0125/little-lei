#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("num(1~5)=");
	scanf("%d",&num);
	
	switch(num){
		case 1: printf("one");break;
		case 2: printf("two");break;
		case 3: printf("three");break;
		case 4: printf("four");break;
		case 5: printf("five");break;
		default : printf("errv");break;
	}
	getch();
	return 0;
}
