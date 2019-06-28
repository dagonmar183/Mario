// 26 June 2019
// Problem set 1 CS50 course

#include <cs50.h>
#include <stdio.h>

int height = 0;


int main(void)
{
    do 
    {
        int n = get_int("Height:");
        if (n > 0 & n < 9)
        {
            height = n;
        };
    } 
    while (height == 0);
    
    int p = height-1;
    
    for (int i = height; i > 0; i--)
    {
        for (int j = i-1; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = p; k < height; k++)
        {
            printf("#");
        }
        printf("  ");
        
         for (int k = p; k < height; k++)
        {
            printf("#");
        }
        p--;
        printf("\n");
    }
}