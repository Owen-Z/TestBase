#include <stdio.h>

int main() {

    int a = 110;
    int *p = &a;

    int *p1 = p;

    // print p's value
    printf("%d", p);    // print 6422084

    printf("%d", p1);

    // print p's tag's value
    printf("%d", *p);   // print 110


    return 0;
}
