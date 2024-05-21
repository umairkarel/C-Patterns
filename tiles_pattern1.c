#include <stdio.h>

int i = 0;

void print1(void)
{
    
    for(int j = 9; j >= i; j--){
        if(j == i)
            printf("* ");
        else
            printf(" ");
    }

    for(int k = i; k > 0; k--){
        printf(" ");
    }

    for(int k = 0; k <= i; k++){
        if(k == i)
            printf("* ");
        else
            printf(" ");
    }

    for(int j = 9; j > i; j--){
        printf(" ");
    }

}


void print2(void)
{

    for(int k = 0; k <= i; k++){
        if(k == i)
            printf("* ");
        else
            printf(" ");
    }
    
    for(int j = 9; j > i; j--){
        printf(" ");
    }

    for(int j = 9; j >= i; j--){
        if(j == i)
            printf("* ");
        else
            printf(" ");
    }

    for(int a = 0; a < i; a++){
        printf(" ");
    }

}


int main()
{

for(int l = 0; l < 5; l++){	
    for(i = -1; i < 10; i++){
        for(int x = 0; x < 6; x++)
            print1();
        printf("\n");
    }

    for(i = 0; i < 11; i++){
        for(int x = 0; x < 6; x++)
            print2();	
        printf("\n");
    }
}

}