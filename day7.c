// pyramid pattern
#include <stdio.h>
int main() 
{
    int n,a=0;
    printf("enter no. of rows");
    scanf("%d", &n);
    int s=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=s;j>=1;j--)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",a++);
        }
        s--;
        printf("\n");
    }
}
