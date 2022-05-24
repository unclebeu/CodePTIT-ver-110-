#include<stdio.h>  
int main()
{
    //Initializing variables.
   char str[100] = "12 3 4 5 6 7 Aaa 1 1 Bbb XXX yyy 5 5 9";
    int i,sum = 0;
    
    //Iterating each character through for loop.
    for (i= 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= '0') && (str[i] <= '9'))  //Checking for numeric characters.
        {
            
            sum += (str[i] - '0'); //Adding numeric characters.

        }
    }
    //Printing result.
    printf("Sum of all digits:\n%d", sum);
    return 0; 
}
