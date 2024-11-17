#include <stdio.h>

void count(char str[][50], int n);
void frequency(char str[][50], int n, int i, int j);

int main(){
    int n,i;
    printf("Enter number : ");
    scanf("%d", &n);
    char str[n][50];

    for(i=0; i<n; i++){
        printf("Slogan %d: ", i+1);
        fgets(str[i], 50, stdin);
    }

    for( i=0; i<n; i++){
        printf("\nFor %s", str[i]);
        count(str, i);
    }
}

void count(char str[][50], int n){
    int i, j;
    for(j=0; str[n][j]!='\0'; j++){
        if(str[n][j]==' '){
            i=j;
        }
    }
    j=j-i-2;
    frequency(str, n, i, j);
    return;
}

void frequency(char str[][50], int n, int a, int b){
    int s=a+b+1, fre[s];
    int i,j;
    for( i=0; i<s; i++){
        fre[i]=1;
    }
    for( i=0; i<s; i++){
        for(j=i+1; j<s; j++){
            if(str[n][i]==str[n][j]) fre[i]++;
            if(i<a && j<a) if(str[n][i]==str[n][j]) fre[i]--;
            if(i>b && j>b) if(str[n][i]==str[n][j]) fre[i]--;
            if(str[n][i]==str[n][j]) str[n][j]='0';
        }
        if(str[n][i]!='0') printf("'%c': %d", str[n][i], fre[i]);
    }
    return;
}
