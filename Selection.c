#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a,b,c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	c = a+b;

    if(c<=10){
		printf("The answer is smaller than or equal to 10");

	} else {
		printf("The answer is greater than or equal to 10");
	}

}
