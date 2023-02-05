#include <stdio.h>

#include <stdlib.h>

int main()
{
int a;
int b;		    
char operator;

printf("Enter a number: \n");
scanf("%d", &a);

printf("Enter a second number: \n");
scanf("%d", &b);

printf("Enter an operator: \n");
scanf(" %c", &operator);

switch(operator)
{
case '+' :									printf("Answer = %d", a + b);
break;

case '-' :
printf("Answer = %d", a - b);
break;

case '*' :
printf("Answer = %d", a * b);
break;

case '/' :
printf("Answer = %d", a / b);
break;

case '%' :
printf("Answer = %d", a % b);
break;

default :
printf("Enter a valid operator");
}

printf("\nTadaaaaaa!!!!!!!");
return 0;
}
