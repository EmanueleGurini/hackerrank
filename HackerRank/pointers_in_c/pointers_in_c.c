#include <stdio.h>
#include <stdlib.h>

void update(int* pa, int* pb) {
	*pa = *pa + *pb;	
	*pb = abs(*pa - (2**pb));
}

int main() {
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	printf("%d\n%d", a, b);

	return 0;
}
