//reverse a given number
#include <stdio.h>
int main()
{
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    int temp;
    while(n>0)
    {
        temp=n%10;
        printf("%d",temp);
        n=n/10;
    }
}
