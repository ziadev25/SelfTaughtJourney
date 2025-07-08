#include <stdio.h>
#include <windows.h>
#include <time.h>

// Declare gotoxy before main
void gotoxy(int x, int y);
void delay(int number_of_seconds);

int main(void){

    int row, col, value;
    int size;

    printf("Please enter size odd: ");
    scanf("%d", &size);  // Fix: add '&' to store input

    row = 1;
    col = (size + 1) / 2;
    value = 1;

    do {
        gotoxy(col * 4, row);  // Multiply col by spacing (4) for better layout
        printf("%2d", value);
        delay(2); // You can use Sleep(500); also...

        if(value % size == 0) {
            row++;
        } else {
            row--;
            col++;
        }

        // Wrap around logic
        if(row < 1) row = size;
        if(col > size) col = 1;

        value++;

    } while(value <= size * size);

    return 0;
}

// Fix array-style mistake
void gotoxy(int x, int y){

    COORD coord;

    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void delay(int number_of_seconds)
{
	// Converting time into milli_seconds
	int milli_seconds = 1000 * number_of_seconds;

	// Storing start time
	clock_t start_time = clock();

	// looping till required time is not achieved
	while (clock() < start_time + milli_seconds);
}
