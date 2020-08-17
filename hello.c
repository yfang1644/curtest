#include <stdio.h>
#include <stdlib.h>
#include "add.h"

int main(int argc, char *argv[])
{
    float x, y, z;

    if(argc == 3) {
        y = atof(argv[1]);
        z = atof(argv[2]);

        x = add(y, z);
        printf("%f\n", x);
    } else {
        printf("command line invalid\n");
        return 2;
    }
	return 0;
}
