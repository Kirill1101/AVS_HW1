#ifndef __flower__
#define __flower__

//------------------------------------------------------------------------------
// flower.h - содержит описание цветка
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

// Ввод параметров цветка из файла
void In(flower& f, FILE* ifst);

// Случайный ввод параметров цветка
void InRnd(flower& f);

// Частное
double Quotient(flower& f);

// Вывод параметров цветка
void Out(flower& f, FILE* ofst);

#endif

