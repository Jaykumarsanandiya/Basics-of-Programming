
#include <stdio.h>

int main(){
	int num;
	char str[100];
	scanf("%d", &num);              			// Reading input from STDIN
	printf("%d \n", 2*num);       // Writing output to STDOUT
	scanf(" %s" , str);
	printf("%s", str);
}