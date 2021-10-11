#ifndef __shrub__
#define __shrub__
//------------------------------------------------------------------------------
// strub.h - �������� �������� ����������
//------------------------------------------------------------------------------

#include "stdio.h"
#include "rnd.h"
using namespace std;

struct shrub {
    // �������� ������ ��� ������� ������
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
    // ����
    Months month;
    char name[20];
};

// ���� ���������� ���������� �� �����
void In(shrub& s, FILE* file);

// ��������� ���� ���������� ����������
void InRnd(shrub& s);

// �������
double Quotient(shrub& s);

// ����� ���������� ����������
void Out(shrub& s, FILE* file);

#endif
