#ifndef __tree__
#define __tree__
//------------------------------------------------------------------------------
// tree.h - �������� �������� ������
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"
using namespace std;

struct tree {
    int age; // �������
    char name[20]; // ��������
};

// ���� ���������� ������������ �� �����
void In(tree& t, FILE* file);

// ��������� ���� ���������� ������������
void InRnd(tree& t);

// �������
double Quotient(tree& t);

// ����� ���������� ������������
void Out(tree& t, FILE* file);

#endif
