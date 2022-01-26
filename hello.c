#include <stdio.h>
#include <stdlib.h>
 
int main(int argc, char *argv[]) {
    int n, aux;
    n = argc;
    unsigned char hex;
    for(int i = 1; i < n; i++)
    {
        sprintf(&hex, "%x", atoi(argv[i]));
        printf("0x%x\n", hex);
    }
    

    return 0;
}

