#include <stdio.h>

int i = 0;

void print1(void)
{
	for(int j = i; j < 10; j++){
		printf(" ");
	}

	for(int k = 0; k <= i; k++){
		printf("*");
	}

	for(int k = 0; k < i; k++){
		printf("*");
	}

	for(int j = i; j < 10; j++){
		printf(" ");
	}
}

void print2(void)
{
	for(int j = 1; j <= i; j++){
		printf(" ");
	}

	for(int k = i; k < 10; k++){
		printf("*");
	}

	for(int k = i; k < 11; k++){
		printf("*");
	}

	for(int j = 0; j < i; j++){
		printf(" ");
	}
}

int main()
{
	int x;
	printf("Enter The Size of Pattern : ");
	scanf("%d",&x);

	for(int l = 0; l < x; l++){
		for(i = 0; i < 11; i++){	
			for(int x = 0; x < 6; x++)
				print1();
			printf("\n");
		}

		for(i = 1; i < 11; i++){	
			for(int x = 0; x < 6; x++)
				print2();
			printf("\n");
		}
	}
}