#ifndef __tree__
#define __tree__
//------------------------------------------------------------------------------
// tree.h - contains a description of the tree
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"
using namespace std;

struct tree {
    int age;
    char name[20];
};

// Input tree parameters from file
void In(tree& t, FILE* file);

// Random input of tree parameters
void InRnd(tree& t);

// Private
double Quotient(tree& t);

// Output tree parameters
void Out(tree& t, FILE* file);

#endif
