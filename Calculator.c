#include <stdio.h>

void main()
{
    float num1, num2, result=0;
    char op;

    printf("Enter two numbers\n");
    scanf("%f%f",&num1,&num2);

    printf("Enter the operator\n");
    scanf(" %c",&op);

    switch(op)
    {
        case '+': result = num1 + num2;
                  break;

        case '-': result = num1 - num2;
                  break;
        
        case '*': result = num1 * num2;
                  break;
        
        case '/': if(num2!=0)
                  {
                    result = num1 / num2;
                  }  
                  else 
                  {
                    printf("Division by 0 is not possible\n");
                  }
                  break;
        
        default : printf("Invalid operator");
    }

    printf("Result : %.2f %c %.2f = %.2f\n",num1,op,num2,result);
}
