#include "C_CollorSetter.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//COLOR CODES AVAILABLE FOR LINUX BASED SYSTEM
//TAKEN FROM https://ramprasadk.wordpress.com/2010/06/09/c-programming-linux-color-text-output/
//#define COLOR_RED   "\033[0;31m"        /* 0 -> normal ;  31 -> red */
//#define COLOR_CYAN  "\033[1;36m"        /* 1 -> bold ;  36 -> cyan */
//#define COLOR_GREEN "\033[4;32m"        /* 4 -> underline ;  32 -> green */
//#define COLOR_BLUE  "\033[9;34m"        /* 9 -> strike ;  34 -> blue */
 
//#define COLOR_BLACK  "\033[0;30m"
//#define COLOR_BROWN  "\033[0;33m"
//#define COLOR_MAGENTA  "\033[0;35m"
//#define COLOR_GRAY  "\033[0;37m"
  
//#define COLOR_NONE   "\033[0m"        /* to flush the previous property */

CollorCollection* newCollorCollection() {
	CollorCollection* collection = (CollorCollection*) malloc(sizeof(CollorCollection));
	strcpy(collection->COLLOR_RED, "\033[0;31m");
	strcpy(collection->COLLOR_CYAN, "\033[1;36m");
	strcpy(collection->COLLOR_GREEN, "\033[4;32m");
	strcpy(collection->COLLOR_BLUE, "\033[9;34m");
	strcpy(collection->COLLOR_BLACK, "\033[0;30m");
	strcpy(collection->COLLOR_BROWN, "\033[0;33m");
	strcpy(collection->COLLOR_MAGENTA, "\033[0;35m");
	strcpy(collection->COLLOR_GRAY, "\033[0;37m");
	strcpy(collection->COLLOR_NONE, "\033[0m");
	return collection;
}

void setConsoleColor(const unsigned char* colorName) {
	printf("%s", colorName);
}
