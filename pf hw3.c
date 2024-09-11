#include<stdio.h>
int main(){
	int distance;
	distance=1207;
	
	int forward_fuel_price;
	forward_fuel_price= 118;
	
	int backward_fuel_price;
	backward_fuel_price=123;
	
	int fuel_average;
	printf("what is your average fuel?: \n");
         printf("The unsigned integer is: %u\n", fuel_average;
	scanf("%d", &fuel_average);
	
	int fuel_consume;
	fuel_consume = (distance/fuel_average)*2;
	
	int forward_fuel_cost;
	forward_fuel_cost = (distance/fuel_average)*forward_fuel_price;
	
	int backward_fuel_cost;
	backward_fuel_cost=(distance/fuel_average)* backward_fuel_price;
	
	int total;
	total=forward_fuel_cost + backward_fuel_cost;
	
	printf("total fuel used : %d \n", fuel_consume);
	printf("total fuel cost : %d",total);
	
	
	 
	return 0;

}
