#ifndef __tree__
#define __tree__
//------------------------------------------------------------------------------
// tree.h - содержит описание дерева
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"
using namespace std;

struct tree {
    int age; // возраст
    char name[20]; // название
};

// Ввод параметров треугольника из файла
void In(tree& t, FILE* file);

// Случайный ввод параметров треугольника
void InRnd(tree& t);

// Частное
double Quotient(tree& t);

// Вывод параметров треугольника
void Out(tree& t, FILE* file);

#endif
