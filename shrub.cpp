//------------------------------------------------------------------------------
// shrub.cpp - contains functions for processing shrubs
//------------------------------------------------------------------------------

#include "shrub.h"

shrub::Months GetMonth(int n) {
    switch (n) {
    case 1:
        return shrub::JANUARY;
    case 2:
        return shrub::FEBRUARY;
    case 3:
        return shrub::MARCH;
    case 4:
        return shrub::APRIL;
    case 5:
        return shrub::MAY;
    case 6:
        return shrub::JUNE;
    case 7:
        return shrub::JULY;
    case 8:
        return shrub::AUGUST;
    case 9:
        return shrub::SEPTEMBER;
    case 10:
        return shrub::OCTOBER;
    case 11:
        return shrub::NOVEMBER;
    case 12:
        return shrub::DECEMBER;
    }
}

const char* GetMonthStr(int n) {
    switch (n+1) {
    case 1:
        return "JANUARY";
    case 2:
        return "FEBRUARY";
    case 3:
        return "MARCH";
    case 4:
        return "APRIL";
    case 5:
        return "MAY";
    case 6:
        return "JUNE";
    case 7:
        return "JULY";
    case 8:
        return "AUGUST";
    case 9:
        return "SEPTEMBER";
    case 10:
        return "OCTOBER";
    case 11:
        return "NOVEMBER";
    case 12:
        return "DECEMBER";
    }
}

//------------------------------------------------------------------------------
// Entering bush parameters from a stream
void In(shrub& s, FILE* file) {
    int k = 0;
    fscanf(file, "%d%s", &k, &s.name);
    s.month = GetMonth(k);
}

//------------------------------------------------------------------------------
// Random input of bush parameters
void InRnd(shrub& s) {
    char* str = RandomStr();
    strcpy(s.name, str);
    int n = rand() % 12 + 1;
    s.month = GetMonth(n);
}

//------------------------------------------------------------------------------
// The quotient of dividing the number of vowels of the name by the number of all letters
double Quotient(shrub& s) {
    char all_gl[12] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    double gl = 0;
    for (int i = 0; i < strlen(s.name); i++) {
        for (int j = 0; j < strlen(all_gl); j++) {
            if (s.name[i] == all_gl[j]) {
                gl++;
                break;
            }
        }
    }
    return gl / strlen(s.name);
}

//------------------------------------------------------------------------------
// Bush parameters output
void Out(shrub& s, FILE* file) {
    const char* str = GetMonthStr(s.month);
    char month[15];
    strcpy(month, str);
    fprintf(file, "It is Shrub. Month: %s, Name: %s, Quotient of division: %e\n", &month, &s.name, Quotient(s));
}

