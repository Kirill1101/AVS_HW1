#ifndef __shrub__
#define __shrub__
//------------------------------------------------------------------------------
// strub.h - contains a description of the bush
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"
using namespace std;

struct shrub {
    // key values for each month
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
    Months month;
    char name[20];
};

// Enter bush parameters from file
void In(shrub& s, FILE* file);

// Random input of bush parameters
void InRnd(shrub& s);

// Quotient
double Quotient(shrub& s);

// Display the parameters of the bush
void Out(shrub& s, FILE* file);

#endif
