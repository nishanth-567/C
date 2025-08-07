 #include <stdio.h>

 float add(float a, float b);
 float sub(float a, float b);
 float mul(float a, float b);
 float div(float a, float b);

 int main()
 {
     float num1, num2;
     char op;
     float result;

     printf("Enter first number : ");
     scanf("%f", &num1);

     printf("\nEnter the operation to be performed (+) or (-) or (*) or (/): ");
     scanf(" %c", &op);

     printf("\nEnter the second number: ");
     scanf("%f", &num2);

     switch(op)
     {
     case '+':
        result = add(num1, num2);
        break;
     case '-':
        result = sub(num1, num2);
        break;
     case '*':
        result = mul(num1, num2);
        break;
     case '/':
         if (num2 != 0)
            result = div(num1, num2);
         else{
                printf("\nDivision by zero is not possible.");
         return 1;

     }
     break;
     default:
        printf("\nInvalid Operator.\n");
 }
 printf("\nResult: %.2f\n", result);
 return 0;
 }

 float add(float a, float b)
 {
     return a + b;
 }
 float sub(float a, float b)
 {
     return a - b;
 }
 float mul(float a, float b)
 {
     return a * b;
 }
 float div(float a, float b)
 {
     return a / b;
 }
