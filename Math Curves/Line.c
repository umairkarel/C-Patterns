#include <stdio.h>

int main()
{
	// y = x
	/*
	for(int i = 30; i >= 0; i--){
		for(int j = 0; j <= 30; j++){
			if((float)i == (float)j)
				printf(". ");
			else
				printf(" ");
		}
		printf("\n");
	}
	
	*/


	//(y = x && y = -x)    X

	for(int i = -20; i <= 20; i++){
		for(int j = -30; j <= 30; j++){
			if((float)i == (float)j)
				printf(".");
			else if((float)i == -(float)j)
				printf(".");
			else
				printf(" ");
		}
		printf("\n");
	}
}