#include <unistd.h>
#include <stdio.h>
int main() {
	int n1;
	int n2;
	printf("Input number : ");
	scanf("%d", &n1);
	printf("Input number : ");
	scanf("%d", &n2);
	if (n1>n2){
	    int g = n1 - n2;
		printf("%d %s %d %s %d", n1," more than ",n2," = ",g);
	}
	else {
	    int g = n2 - n1;
		printf("%d %s %d %s %d", n2," more than ",n1," = ",g);
	}	
	return 0;
}
