#include <stdio.h>
#include<string.h>
#include <stdlib.h>
int y=10;
char *c;
int main() {
    int a = 10;
    a << 1;
    float b = 3.14 ;
    char c = 'x';
    
    if ( a < b) {
        a = a + 10;
    } else {
        a = a - 2;
    }

    while (b > 0) {
        b--;
    }

    for (int i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }
    return 0;
}
