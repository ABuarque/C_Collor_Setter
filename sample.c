#include <stdio.h>
#include "C_CollorSetter.h"

int main() {
	printf("oi\n");
	CollorCollection* c = newCollorCollection();
	setConsoleColor(c->COLLOR_RED);
	printf("hehe\n");
	setConsoleColor(c->COLLOR_CYAN);
	printf("hehe\n");
	setConsoleColor(c->COLLOR_MAGENTA);
	printf("hehe\n");
	return 0;
}
