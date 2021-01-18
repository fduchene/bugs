#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char* myString = malloc(sizeof(char)*8);
	strcpy(myString, "hello");

	return 0;
}
