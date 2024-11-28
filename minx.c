#include <unistd.h>
#include <stdio.h>
int main() {
	int a = 0;
	int b = 1;
	int a;
	int b;
	printf("Input number : ");
	scanf("%d", &a);
	printf("Input number : ");
	scanf("%d", &b);
	if (a>b){
		printf("Number 1 greater than Number 2");
	    int g = a - b;
		printf("%d %s %d %s %d", a," more than ",b," = ",g);
	}
	else {
		printf("Number 2 greater than Number 1");
	    int g = b - a;
		printf("%d %s %d %s %d", b," more than ",a," = ",g);
	}	
	return 0;
}
