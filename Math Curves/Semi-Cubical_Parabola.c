#include <stdio.h>

int main()
{
	for(int i = 30; i >= -30; i--){
		for(int j = -10; j <= 10; j++){
			if((float)i*(float)i == (float)j*(float)j*(float)j)
				printf(".");
			else
				printf(" ");
		}
		printf("\n");
	}
}