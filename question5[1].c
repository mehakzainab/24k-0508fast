#include <stdio.h>

int main(){
    int n, arr[n],max=0;
    printf("Enter size of array : ");
    scanf("%d", &n);
           int i,j;
    for(i=0; i<n; i++){
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]>max) max=arr[i];
    }

    printf("Horizontal :\n");
    for( i=0; i<n; i++){
        printf("Value %d: ", i+1);
        for(j=0; j<arr[i]; j++){
            printf("* ");
        }
        printf("\n");
    }

    printf("Vertical :\n");
    for( i=0; i<max; i++){
        for( j=0; j<n; j++){
            if(arr[j]>=max-i) printf("* ");
            else printf("  ");
        }
        printf("\n");
        if(i==max-1){
            for( i=0; i<n; i++){
                printf("%d ",arr[i]);
            }
        }
    }
}
