#include <stdio.h>  
int main()  
{   
   int num, sum = 0, i, array[50];  
    printf(" Enter a positive number as we want to sum the natural number: ");  
   scanf("%d", &num); // take a positive number   
   printf("\n Enter the number one by one: \n");  
   for (i = 0; i < num; i++)  
   {  
      
      scanf("%d", &array[i]); // read value one by one   
      sum = sum + array[i]; // store number into the sum variable  
   }  
   printf("Sum of the given number is = %d\n", sum);  
   return 0;  
}