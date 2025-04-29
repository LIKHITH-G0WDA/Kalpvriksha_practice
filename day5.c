//check if it is an armstrong number or not
#include <stdio.h>
int main() 
{
   int num;
   printf("enter a number: ");
   scanf("%d", &num);
   int sum=0;
   int temp=num,rem;
   while(num>0)
   {
       rem=num%10;
       sum=sum+(rem*rem*rem);
       num=num/10;
   }
   if(temp==sum)
   {
       printf("armstrong number");
   }
   else
   {
       printf("not an armstrong number");
   }
   
}
