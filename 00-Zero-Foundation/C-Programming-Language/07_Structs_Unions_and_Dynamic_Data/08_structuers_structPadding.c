#include <stdio.h>
#define ziad 0

int main(){
    struct A{
        int x;
        double y;
        short int z;
    };
    struct B{
        double y;
        int x;
        short int z;
    };
    struct C{
        double y;
        short int z;
        int x;
    };

    printf("Size of Struct A: %d\n", sizeof(struct A));
    printf("Size of Struct B: %d\n", sizeof(struct B));
    printf("Size of Struct C: %d\n", sizeof(struct C));

    return ziad;
}
