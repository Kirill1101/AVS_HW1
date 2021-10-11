//------------------------------------------------------------------------------
// tree.cpp - contains functions for processing trees
//------------------------------------------------------------------------------

#include "tree.h"

//------------------------------------------------------------------------------
// Input tree parameters from stream
void In(tree& t, FILE* file) {
    fscanf(file, "%d%s", &t.age, &t.name);
}

//------------------------------------------------------------------------------
// Random input of tree parameters
void InRnd(tree& t) {
    char* str = RandomStr();
    strcpy(t.name, str);
    t.age = (rand() % 1000) + 1;
}

//------------------------------------------------------------------------------
// The quotient of dividing the number of vowels of the name by the number of all letters
double Quotient(tree& t) {
    char all_gl[12] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    double gl = 0;
    for (int i = 0; i < strlen(t.name); i++) {
        for (int j = 0; j < strlen(all_gl); j++) {
            if (t.name[i] == all_gl[j]) {
                gl++;
                break;
            }
        }
    }
    return gl / strlen(t.name);
}

//------------------------------------------------------------------------------
// Output tree parameters
void Out(tree& t, FILE* file) {
    fprintf(file, "It is Tree. Age: %d, Name: %s, Quotient of division: %e\n", t.age, &t.name, Quotient(t));
}


