#ifndef __flower__
#define __flower__

//------------------------------------------------------------------------------
// flower.h - �������� �������� ������
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

// ���� ���������� ������ �� �����
void In(flower& f, FILE* ifst);

// ��������� ���� ���������� ������
void InRnd(flower& f);

// �������
double Quotient(flower& f);

// ����� ���������� ������
void Out(flower& f, FILE* ofst);

#endif

