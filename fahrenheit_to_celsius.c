#include <stdio.h>

int main()
{
    int Fahrenheit ; 
    float Celsius ; 
    
      printf("Enter the Fahrenheit value : ");
    scanf("%d", &Fahrenheit);
    Celsius = ( Fahrenheit- 32) * 5 / 9.0;
     printf("The temp in Celsius: %.2f", Celsius);
      
    


    return 0;
}