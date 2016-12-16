#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float Far, Cel;
    
    printf("Enter Fahrenheit: ");
    scanf("%f", &Far);
    printf("\n\n");
    if(Far >= 0)
    {
           Cel=(Far-32)*5/9;
           
              printf("Fahrenheit: ");
              printf("%f", Far);
              printf("oF");
              printf("\n\n");
                        
              printf("Celcius: ");
              printf("%f" , Cel); 
              printf("oC"); 
              printf("\n\n");    
    }
    else
    {
     printf("Error Negative Value!");  
    }   
    system("pause");
    return(0);
}
