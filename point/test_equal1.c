#include <stdio.h>

int main() {

    int a = 110;
    int b = 112;
    int *p = &a;
    int *p1 = p;

    printf("%d\n", p);  // print 6422028
    printf("%d\n", *p); // print 110
    printf("%d\n", p1); // print 6422028

    *p = &b;
    printf("%d\n", p);  // print 6422028
    printf("%d\n", *p); // print 6422024
    printf("%d\n", a);  // print 6422024
    printf("%d\n", p1); // print 6422028

    p = &b;
    printf("%d\n", p);  // print 6422024
    printf("%d\n", *p); // print 112

    return 0;
}
