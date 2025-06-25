#include <stdio.h>
int main(void){
	int celsius;
	printf("Enter temperature in C: "); 
	scanf("%d", &celsius);
	int fahrenheit = 1.8*celsius+32;
	printf("The temperature in F is %d\n", fahrenheit);
	if (fahrenheit >= 100){
		printf("Warning: Heat Wave\n");
	}
	else if (80 <= fahrenheit && fahrenheit <= 99){
		printf("Hot\n");
	}
	else if (41 <= fahrenheit && fahrenheit <= 79){
                printf("Normal\n");
        }
	else if (10 <= fahrenheit && fahrenheit <= 40){
                printf("Cold\n");
        }
}
	
