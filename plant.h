#ifndef __plant__
#define __plant__

//------------------------------------------------------------------------------
// plant.h - contains a description of the generalizing plant
//------------------------------------------------------------------------------

#include "tree.h"
#include "shrub.h"
#include "flower.h"

struct plant {
    enum key { TREE, SHRUB, FLOWER };
    key k;
    union {
        tree t;
        shrub s;
        flower f;
    };
};

// Enter a generic figure
bool In(plant& s, FILE* file);

// Random input of a generic figure
bool InRnd(plant& s);

double Quotient(plant& p);

// Display the generalized figure
void Out(plant& s, FILE* file);

#endif
