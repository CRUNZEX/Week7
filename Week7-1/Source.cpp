#include<stdio.h>
int main() {
    int size, rowSize = 0;
    scanf_s("%d", &size);

    if (size < 1)
    {
        printf("Error");
        return 0;
    }

    for (int i = 1, sum = 0; sum < size; i++, rowSize++) // row
        sum += i;

    for (int row = 1; row < rowSize; row++) // print star
    {
        for (int posi = 0, loop = (row % 2 == 0) ? rowSize - 1 - row : rowSize - 2; posi <= loop; posi++)
            printf(" ");
        for (int posi = 1; posi <= row; posi++)
            printf("*");
        printf("\n");
    }

    // last row
    for (int posi = 0, loop = (rowSize % 2 == 0) ? rowSize - 1 - (size - ((rowSize - 1) * (rowSize)) / 2) : rowSize - 2; posi <= loop; posi++)
        printf(" ");
    for (int posi = 1; posi <= (size - ((rowSize - 1) * (rowSize)) / 2); posi++)
        printf("*");

    return 0;
}