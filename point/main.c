#include <stdio.h>

int main() {

    int a = 110;
    int *p = a;

    // p's address is 6422032
    printf("%d\n", &p);

    // a's address is 6422044
    printf("%d\n", &a);

    // a's value is 110
    printf("%d\n", a);

    // p's value is 110
    printf("%d\n", p);

    int *p1 = &a;
    // p1's address is 6422024
    printf("%d\n", &p1);

    // p1's value is 6622044 which is a's address
    printf("%d\n", p1);

    // print a's value
    printf("%d\n", *p1);



    return 0;
}
