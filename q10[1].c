#include<stdio.h>

int main(){
    int space , a ,innerspace , star , i , j , l;

    printf("Enter any number :");
    scanf("%d", &a);

    space = (a*2)-2;
    spaceinner = 0;


    for(i = 0; i <  a-1; i++){
        for(j = 0; j < space; j++){
            printf(" ");
        }
        printf("*");
        for(l = 0; l < innerspace; l++){
            printf(" ");
        }

        if(l != 0)
            printf("*");
        

        printf("\n");

        space--;
        if(i == 0)
            innerspace++;
        else
            innerspace+=2;
    }


    for(i = 0 ;  i < a; i++){
        printf("*");
    }

    for(i = 0;  i < innerspace; i++){
        printf(" ");
    }

    for(i = 0 ;  i < a; i++){
        printf("*");
    }


    printf("\n");
    spaceinner = (innerspace*2)-1;
    space = 1;

    for(i = 0; i < a-1;  i++){
        for(j = 0; j  < space; j++){
            printf(" ");
        }
        printf("*");
        for(l = 0 ; l < innerspace; l++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        innerspace-=2;
        space++;

    }
    

    space = a-2;
    spaceinner = 1;
    for(i = 0; i < a-2; i++){
        for(j = 0; j < space; j++){
            printf(" ");
        }
        printf("*");
        for(l = 0; l < space; l++){
            printf(" ");
        }
        printf("*");
        for(j = 0;  j < spaceinner; j++){
            printf(" ");
        }
        printf("*");
        for( j = 0; j < space; j++){
            printf(" ");
        }
        printf("*");
        printf("\n");
        space --;
        spaceinner+=4;

    }
    spaceinner+=2;
    printf("*");
    for(j = 0; j < spaceinner; j++){
        printf(" ");
    }
    printf("*");
    return 0;
}
