#include <stdio.h>

int main()
{
	int n; 
	static const char* setOfStringValue[] = {"one", "two", "three", "four", "five", "six", "seven", "height", "nine"};  

	scanf("%d", &n);
	printf("%s", n >= 1 && n <= 9 ? setOfStringValue[n - 1] : "Greater than 9"); 
	return 0;
}
