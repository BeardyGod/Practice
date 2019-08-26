#include <cs50.h>
#include <stdio.h>

// declaration of function
float valid_triangle(float a, float b, float c);

int main(void)
{
    // asking for input 
    printf("Length of Side 1 is: ");
    float side1 = get_float("");
    
    printf("Length of Side 2 is: ");
    float side2 = get_float("");
    
    printf("Length of Side 3 is: ");
    float side3 = get_float("");
    
    // checking if positive then calling the function
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("False Triangle\n");
    }
    else if (valid_triangle(side1, side2, side3) == true)
    {
        printf("Valid Triangle\n");
    }
    else
    {
        printf("Invalid triangle\n");
    }
    
}


float valid_triangle(float a, float b, float c)
{
    if (a + b > c || a + c > b || b + c > a)
    {
        return true;        
    }
    else
    {
        return false;
    }
  
}
