//------------------------------------------------------------------------------
// shape.cpp - содержит процедуры связанные с обработкой обобщенной фигуры
// и создания произвольной фигуры
//------------------------------------------------------------------------------

#include "plant.h"

//------------------------------------------------------------------------------
// Ввод параметров обобщенного растения из файла
bool In(plant& p, FILE* file) {
    int k = 0;
    fscanf(file, "%d", &k);
    switch (k) {
    case 1:
        p.k = plant::TREE;
        In(p.t, file);
        return true;
    case 2:
        p.k = plant::SHRUB;
        In(p.s, file);
        return true;
    case 3:
        p.k = plant::FLOWER;
        In(p.f, file);
        return true;
    default:
        return false;
    }
}

// Случайный ввод обобщенного растения
bool InRnd(plant& p) {
    auto k = rand() % 3 + 1;
    switch (k) {
    case 1:
        p.k = plant::TREE;
        InRnd(p.t);
        return true;
    case 2:
        p.k = plant::SHRUB;
        InRnd(p.s);
        return true;
    case 3:
        p.k = plant::FLOWER;
        InRnd(p.f);
        return true;
    default:
        return false;
    }
}

double Quotient(plant& p) {
    switch (p.k) {
    case plant::TREE:
        return Quotient(p.t);
    case plant::SHRUB:
        return Quotient(p.s);
    case plant::FLOWER:
        return Quotient(p.f);
    default:
        return 0.0;
    }
}

//------------------------------------------------------------------------------
// Вывод параметров текущего растения
void Out(plant& pl, FILE* file) {
    switch (pl.k) {
    case plant::TREE:
        Out(pl.t, file);
        break;
    case plant::SHRUB:
        Out(pl.s, file);
        break;
    case plant::FLOWER:
        Out(pl.f, file);
        break;
    default:
        fprintf(file, "Incorrect plant!\n");
    }
}


