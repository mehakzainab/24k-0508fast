#include<stdio.h>
int main() {
    int p;

 
    do {
        printf("Enter value for principal (between 100 and 100000): ");
        scanf("%d", &p);

        if (p < 100 || p > 100000) {
            printf("ERROR: Principal must be between 100 and 100000.");
        }
    } while (p < 100 || p > 100000);


    float R;
    do {
        printf("Enter value for rate of interest (between 5%% and 10%%): ");
        scanf("%f", &R);

        if (R < 5.0 || R > 10.0) {
            printf("ERROR: Rate of interest must be between 5%% and 10%%.");
        }
    } while (R < 5.0 || R > 10.0);


    int Time;
    do {
        printf("Enter value for time period (in years, between 1 and 10):");
        scanf("%d", &Time);

        if (Time < 1 || Time > 10) {
            printf("ERROR: Time period must be between 1 and 10 years.");
        }
    } while (Time < 1 || Time > 10);

   
    float interest;
    printf("interest :%f", interest= (p* R* Time)/100);
    


    printf("The calculated simple interest is: %f", interest);

    return 0;
}
