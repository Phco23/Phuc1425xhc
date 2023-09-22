#include <stdio.h>

int sum(int a, int b);
int substrac(int a, int b);
int multipli(int a, int b);
float division(float a, float b);

int main(){
	int c, d;
	printf("Enter number 1: ");
	scanf("%d", &c);
	printf("Enter number 2: ");
	scanf("%d", &d);
	int result1 = sum(c, d);
	int result2 = substrac(c, d);
	int result3 = multipli(c, d);
    float result4 = division(c, d);
	printf("Result of sum is: %d\n", result1);
	printf("Result of substrac is: %d\n", result2);
	printf("Result of multipli is: %d\n", result3);
	printf("Result of division is: %f\n", result4);
}

int sum(int a, int b){
	int z;
	z = a + b;
	return z;
}

int substrac(int a, int b){
	int z;
	z = a - b;
	return z;
}

int multipli(int a, int b){
	int z;
	z = a * b;
	return z;
}

float division(float a, float b){
	float z;
	z = a / b;
	return z;
}

