#ifndef C_COLLOR_SETTER_H
#define C_COLLOR_SETTER_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
	unsigned char COLLOR_RED[15];
	unsigned char COLLOR_CYAN[15];
	unsigned char COLLOR_GREEN[15];
	unsigned char COLLOR_BLUE[15];
	unsigned char COLLOR_BLACK[15];
	unsigned char COLLOR_BROWN[15];
	unsigned char COLLOR_MAGENTA[15];
	unsigned char COLLOR_GRAY[15];
	unsigned char COLLOR_NONE[15];
} CollorCollection;

/**
 * It creates a CollorCollection object and returns it.
 *
 * return CollorCollection object
 */
CollorCollection* newCollorCollection();

/**
 * It gets a CollorCollection object and destroys it;
 *
 * @param CollorCollection object
 */
void destroyCollorCollection(CollorCollection* collorCollection);

/**
 * It changes console text color by passing as 
 * argument the collor name of a CollorCollection object.
 *
 * @param a collor name, like my_collor_collection->COLLOR_RED
 */
void setConsoleColor(const unsigned char* colorName);

#endif
