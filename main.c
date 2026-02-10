#include <stdio.h>


int main () {

	char name[30];

	printf("Hello World!\n");
	printf("Type your name: ");
	scanf("%s", &name);

	printf("Hello, %s!\n", name);

	return 0;
}
