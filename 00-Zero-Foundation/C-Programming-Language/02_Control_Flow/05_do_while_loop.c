#include <stdio.h>

void main(void)
{

    int j=0;
    int n, f, f1, f2;


    // Do - While :

    do {

       printf("\n Value of j is = %d\n", j);
       j++;

    } while ( j <= 5 );



    // Fibonacci series do - while:

    printf("\nEnter the number of terms: ");
    scanf(" %d", &n);

    f1 = -1;
    f2 = 1;

    do{

        f = f1 + f2;
        f1 = f2;
        f2 = f;

        printf("%d\n", f);
        n--;

    } while (n>0);


}
