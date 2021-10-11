#ifndef __plant__
#define __plant__

//------------------------------------------------------------------------------
// plant.h - содержит описание обобщающего растения
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

// Ввод обобщенной фигуры
bool In(plant& s, FILE* file);

// Случайный ввод обобщенной фигуры
bool InRnd(plant& s);

double Quotient(plant& p);

// Вывод обобщенной фигуры
void Out(plant& s, FILE* file);

#endif
