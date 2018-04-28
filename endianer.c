#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned int i = 1;
    char *c = (char *) &i;

    if (*c) {
        printf ("Little (Intel) endian system\n");
    } else {
        printf ("Big (Motorola) endian system\n");
    }

    printf ("Press enter to quit\n");
    getchar ();
    return 0;
}

