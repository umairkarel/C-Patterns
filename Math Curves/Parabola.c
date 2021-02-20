#include <stdio.h>

int main()
{
    for(int x = 60; x >= 0; x--){
        for(int y = -60; y <= 60; y++){
            if((float)y*(float)y == 16*(float)x)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}