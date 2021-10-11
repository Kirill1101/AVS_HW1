#ifndef __plant__
#define __plant__

//------------------------------------------------------------------------------
// plant.h - �������� �������� ����������� ��������
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

// ���� ���������� ������
bool In(plant& s, FILE* file);

// ��������� ���� ���������� ������
bool InRnd(plant& s);

double Quotient(plant& p);

// ����� ���������� ������
void Out(plant& s, FILE* file);

#endif
