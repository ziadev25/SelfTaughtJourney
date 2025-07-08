#include <stdio.h>
#define MAX 5

void main(void) {

    char days_of_week[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    float temp, avg;
    float sum = 0.0;

    float day[360];
    float sum1 = 0.0, max;
    int num, i1 = 0;


    int n = sizeof(days_of_week) / sizeof(days_of_week[0]);
    printf("SIZE OF THIS ARRAY IS: %d\n\n", n);

    for (int i = 0; i < 7; i++){
        printf("Please enter temperature of [%s]: ", days_of_week[i]);
        scanf("%f", &temp);
        sum += temp;
    }

    printf("\nSum of temperature of all days is: %f\n", sum);

    avg = sum / 7.0;
    printf("\nAverage of temperature of all day is = %7.2f\n", avg);

    printf("\n---------------------------------------------------\n\n");

    do{
        if(i1 <= MAX) {
            printf("Please enter temperature for day [%d]: ", i1 + 1);
            scanf("%f", &day[i1]);
        }
        else {
            printf("It's greater than max!! \n");
            break;
        }
    }while(day[i1++ > 0]);

    num = i1 - 1;
    max = - 1000;

    printf("\n\nData stored in array is: %d\n", num);
    for (i1 = 0; i1 < num; i1++){
        printf("\nValue of %d is %0.2f", i1 + 1, day[i1]);
        sum1 += day[i1];
        if (day[i1] > max)
            max = day[i1];
    }

    printf("\n\nAverage is: %.2f\n", sum1/num);
    printf("\n\nMax day is: %.2f\n", max);

}
