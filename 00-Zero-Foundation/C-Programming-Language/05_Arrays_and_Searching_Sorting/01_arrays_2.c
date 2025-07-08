#include <stdio.h>
#define MAXSIZE 5
int sum(int a[],int n);
int max(int b[], int size);

void main(void){

    int days[MAXSIZE] = {30, 100, 70, 60, 20};
    int res_1, res_2;

    res_1 = sum(days, 5);
    res_2 = max(days, 5);

    printf("Sum of array is = %d\n", res_1);
    printf("Max value of array is = %d\n", res_2);
}

int sum(int a[],int n){

    int s = 0;
    int i;

    for(i = 0; i < n; i++)
        s += a[i];
    return s;
}

int max(int b[], int size){

    int m;
    int i;

    m = b[0];
    for(i = 0; i < size; i++)
        if(b[i] > m) m = b[i];
    return m;
}
