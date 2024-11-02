#include<stdio.h>

#define SIZE 20

void initializeArray(char arr[][SIZE])
{
    for(int row = 0; row < SIZE; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            arr[row][col] = 'a';
        }
    }
}
void printArray(char arr[][SIZE])
{
     for(int row = 0; row < SIZE; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            printf("[%c]",arr[row][col]);
        }
        printf("\n");
    }
}

int main(void)
{
    char map[SIZE][SIZE];
    initializeArray(map);
    printArray(map);
}
