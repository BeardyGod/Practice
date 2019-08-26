#include <stdio.h>

int main()
{
    int i;
    
    // Printing month and year along with days as per calendar style
    printf("     August 2019\n");
    printf(" Su Mo Tu We Th Fr Sa\n");

    // Initiating a loop for printing of dates
    for(i = 1; i < 32; i++)
    {
         if(i == 1)
         {
             printf("             %2d", i); 
         }
         else if(i % 7 == 3) 
         {
             printf(" %2d\n", i);
         }
         else 
         {
             printf(" %2d", i);
         }
    }
    return 0;
}
