#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int a, b;
    	scanf("%d\n%d", &a, &b);

	char* labels[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "even", "odd"};

	for(int i = a; i <= b; i++){

		int labels_index = i <= 9 ? i - 1 : 9 + i % 2;
		printf("%s\n", labels[labels_index]);
		
	}

	return 0; 
}