//------------------------------------------------------------------------------
// flower.cpp - contains functions for processing flowers
//------------------------------------------------------------------------------

#include "flower.h"

// Type selection
flower::Type GetType(int n) {
    switch (n) {
    case 1:
        return flower::HOME;
    case 2:
        return flower::GARDEN;
    case 3:
        return flower::WILD;
    }
}

const char* GetTypeStr(int n) {
    switch (n+1) {
    case 1:
        return "HOME";
    case 2:
        return "GARDEN";
    case 3:
        return "WILD";
    }
}

//------------------------------------------------------------------------------
// Input the parameters of the flower from the stream
void In(flower& f, FILE* file) {
    int k = 0;
    fscanf(file, "%d%s", &k, &f.name);
    f.type = GetType(k);
}

//------------------------------------------------------------------------------
// Random input of flower parameters
void InRnd(flower& f) {
    char* str = RandomStr();
    strcpy(f.name, str);
    int n = rand() % 3 + 1;
    f.type = GetType(n);
}

//------------------------------------------------------------------------------
// The quotient of dividing the number of vowels of the name by the number of all letters
double Quotient(flower& f) {
    char all_gl[12] = { 'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u', 'Y', 'y' };
    double gl = 0;
    for (int i = 0; i < strlen(f.name); i++) {
        for (int j = 0; j < strlen(all_gl); j++) {
            if (f.name[i] == all_gl[j]) {
                gl++;
                break;
            }
        }
    }
    return gl / strlen(f.name);
}

//------------------------------------------------------------------------------
// Display the parameters of the flower
void Out(flower& f, FILE* file) {
    const char* str = GetTypeStr(f.type);
    char type[10];
    strcpy(type, str);
    fprintf(file, "It is Flower. Type: %s, Name: %s, Quotient of division: %e\n", &type, &f.name, Quotient(f));
}