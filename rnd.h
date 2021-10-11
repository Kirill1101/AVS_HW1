#ifndef __rnd__
#define __rnd__

#include <cstdlib>
#include <stdio.h>
#include <string.h>

//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайного имени.
//------------------------------------------------------------------------------

inline char* RandomStr() {
    int len = rand() % 10 + 3;
    char* name = new char[len] {'\0'};
    char a;
    for (int i = 0; i < len; i++)
    {
        a = rand() % ('z' - 'a' + 1) + 'a';
        name[i] = a;
    }
    name[len - 1] = '\0';
    return name;
}
#endif 