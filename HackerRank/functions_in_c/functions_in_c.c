#include <stdio.h>

int max_of_two(int a, int b){
	int ans = (a > b) ? a : b;
	return ans;
}

int max_of_four(int a, int b, int c, int d) {
	int ans1 = max_of_two(a, b);
	int ans2 = max_of_two(c, d); 
	int ans3 = max_of_two(ans1, ans2); 
	return ans3;
}

int main(){
	int a,b,c,d; 
	scanf("%d %d %d %d", &a, &b, &c, &d);
	int ans = max_of_four(a, b, c, d); 
	printf("%d", ans);
	return 0; 
}

