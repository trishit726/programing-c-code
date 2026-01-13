// Type Content here...
#include<stdio.h>
int main(){
int num1,num2;
int sum, difference, product, remainder;
int quotient;
scanf("%d %d", &num1, &num2);

sum = num1 +num2;
difference = num1 -num2;
product = num1 * num2;
quotient = num1 / num2;
remainder = num1 % num2;

printf("%d\n",sum);
printf("%d\n",difference);
printf("%d\n",product);
printf("%d\n",quotient);
printf("%d\n",remainder);
}
