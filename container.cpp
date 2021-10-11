//------------------------------------------------------------------------------
// container_Constr.cpp - содержит функции обработки контейнера
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container& c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container& c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного файла.
void In(container& c, FILE* file) {
    while (!feof(file)) {
        if (In(c.cont[c.len], file)) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void InRnd(container& c, int size) {
    while (c.len < size) {
        if (InRnd(c.cont[c.len])) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Out(container& c, FILE* file) {
    fprintf(file, "Container contains %d elements.\n", c.len);
    for (int i = 0; i < c.len; i++) {
        fprintf(file, "%d: ", i);
        Out(c.cont[i], file);
    }
}

//------------------------------------------------------------------------------
// Перемещение элементов контейнера
void Shift(container& c) {
    int counter = 0;
    double sum = 0;
    for (int i = 0; i < c.len; i++) {
        sum += Quotient(c.cont[i]);
        counter++;
    }
    double average = sum / counter;

    int k = c.len;
    for (int i = 0; i < k; i++) {
        double num = Quotient(c.cont[i]);
        if (num > average) {
            plant pl = c.cont[i];
            for (int j = i; j < c.len - 1; j++) {
                c.cont[j] = c.cont[j + 1];
            }
            i--;
            k--;
            c.cont[c.len - 1] = pl;
        }
    }
}