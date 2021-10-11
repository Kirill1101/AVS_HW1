#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - contains the data type,
// representing the simplest container
//------------------------------------------------------------------------------

#include "plant.h"

//------------------------------------------------------------------------------
// The simplest container based on a one-dimensional array
struct container {
    enum { max_len = 10000 };
    int len;
    plant cont[max_len];
};

// Initialize the container
void Init(container& c);

// Clearing the container from items (freeing memory)
void Clear(container& c);

// Inject the contents of the container from the specified stream
void In(container& c, FILE* file);

// Randomly enter the contents of the container
void InRnd(container& c, int size);

// Output the contents of the container to the specified stream
void Out(container& c, FILE* file);

// Move container elements
void Shift(container& c);

#endif