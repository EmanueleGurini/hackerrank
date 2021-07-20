#include <stdio.h>

int  main(){
	int int1, int2; 
	float float1, float2; 

	scanf("%d %d", &int1, &int2);
	scanf("%f %f", &float1, &float2);

	int intSum = int1 + int2; 
	int intDifference = int1 - int2; 

	float floatSum = float1 + float2; 
	float floatDifference = float1 - float2;

	printf("%d %d\n", intSum, intDifference);
	printf("%.1f %.1f\n", floatSum, floatDifference);

	return 0;
}

