#include<stdio.h>
int main(){

    char opt;
    float op1,op2;
     printf("Enter an operator (+,-,*,/)\n");
    scanf("%c",&opt);
    printf("Enter two operands : \n");
    scanf("%f%f",&op1,&op2);
   
    switch(opt)
    {
    case '+':
            printf("Sum of %.2f and %.2f is %.2f \n",op1,op2,op1+op2);
            break;
    case '-':
            printf("Difference of %.2f and %.2f is %.2f \n",op1,op2,op1-op2);
            break;
    case '*':
            printf("Produt  of %.2f and %.2f is %.2f \n",op1,op2,op1*op2);
            break;
    case '/':
            printf("Quotient of %.2f and %.2f is %.2f \n",op1,op2,op1/op2);
            break;
    default:
        printf("ERROR! operator is not correct! \n");
        break;
    }
    return 0;
}