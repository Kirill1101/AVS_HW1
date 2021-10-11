//------------------------------------------------------------------------------
// container.cpp - contains container handling functions
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Container initialization
void Init(container& c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Clearing a container of elements (freeing memory)
void Clear(container& c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Entering the contents of the container from the specified file.
void In(container& c, FILE* file) {
    while (!feof(file)) {
        if (In(c.cont[c.len], file)) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Random input of container contents
void InRnd(container& c, int size) {
    while (c.len < size) {
        if (InRnd(c.cont[c.len])) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Outputting the contents of the container to the specified stream
void Out(container& c, FILE* file) {
    fprintf(file, "Container contains %d elements.\n", c.len);
    for (int i = 0; i < c.len; i++) {
        fprintf(file, "%d: ", i);
        Out(c.cont[i], file);
    }
}

//------------------------------------------------------------------------------
// Moving container elements
void Shift(container& c) {
    int counter = 0;
    double sum = 0;
    for (int i = 0; i < c.len; i++) {
        sum += Quotient(c.cont[i]);
        counter++;
    }
    double average = sum / counter;

    int k = c.len;
    for (int i = 0; i < k; i++) {
        double num = Quotient(c.cont[i]);
        if (num > average) {
            plant pl = c.cont[i];
            for (int j = i; j < c.len - 1; j++) {
                c.cont[j] = c.cont[j + 1];
            }
            i--;
            k--;
            c.cont[c.len - 1] = pl;
        }
    }
}