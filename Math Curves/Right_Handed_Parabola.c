#include <stdio.h>

int main()
{
	for(int i = 15; i >= -15; i--){
		for(int j = 0; j <= 49; j++){
			if((float)i*(float)i == 4*(float)j)
				printf(". ");
			else
				printf(" ");
		}
		printf("\n");
	}
}