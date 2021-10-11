//------------------------------------------------------------------------------
// main.cpp - contains the main function,
// providing easy testing
//------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <cstdlib> 
#include <ctime> 
#include <cstring>

#include "container.h"

void errMessage1() {
    printf("incorrect command line!\n"
            "  Waited:\n"
            "     command -f infile outfile01 outfile02\n"
            "  Or:\n"
            "     command -n number outfile01 outfile02\n");
}


//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
    if (argc != 5) {
        errMessage1();
        return 1;
    }

    printf("Start\n");
    container c;
    Init(c);
    FILE* file;

    // Enter all plants.
    if (!strcmp(argv[1], "-f")) {
        file = fopen(argv[2], "rt");
        In(c, file);
        fclose(file);
    }
    else if (!strcmp(argv[1], "-n")) {
        auto size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            printf("Incorrect number\n");
            return 3;
        }
        srand(static_cast<unsigned int>(time(0)));
        InRnd(c, size);
    }

    // Output the contents of the container to a file
    file = fopen(argv[3], "wt");
    Out(c, file);
    fclose(file);

    // Output of the container processed by the function
    file = fopen(argv[4], "wt");
    Shift(c);
    Out(c, file);
    Clear(c);
    printf("Stop\n");
    return 0;
}
