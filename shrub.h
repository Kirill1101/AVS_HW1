#ifndef __shrub__
#define __shrub__
//------------------------------------------------------------------------------
// strub.h - содержит описание кустарника
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"
using namespace std;

struct shrub {
    // значения ключей для каждого месяца
    enum Months
    {
        JANUARY,
        FEBRUARY,
        MARCH,
        APRIL,
        MAY,
        JUNE,
        JULY,
        AUGUST,
        SEPTEMBER,
        OCTOBER,
        NOVEMBER,
        DECEMBER
    };
    // ключ
    Months month;
    char name[20];
};

// Ввод параметров кустарника из файла
void In(shrub& s, FILE* file);

// Случайный ввод параметров кустарника
void InRnd(shrub& s);

// Частное
double Quotient(shrub& s);

// Вывод параметров кустарника
void Out(shrub& s, FILE* file);

#endif
