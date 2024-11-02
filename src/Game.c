#include<stdio.h>

#define SIZE 20

int main(void)
{
    char map[SIZE][SIZE];
    for(int row = 0; row < SIZE; row++)
    {
        for(int col = 0; col < SIZE; col++)
        {
            map[row][col] = 'a';
            printf("[%c]", map[row][col]);
        }
        printf("\n");
    }
}