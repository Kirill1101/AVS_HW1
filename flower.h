#ifndef __flower__
#define __flower__

//------------------------------------------------------------------------------
// flower.h - contains a description of the flower
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"
using namespace std;

struct flower {
    enum Type
    {
        HOME,
        GARDEN,
        WILD   
    };
    Type type;
    char name[20];
};

// Enter flower parameters from file
void In(flower& f, FILE* ifst);

// Random input of flower parameters
void InRnd(flower& f);

// Quotient
double Quotient(flower& f);

// Output of flower parameters
void Out(flower& f, FILE* ofst);

#endif

