//factorial of a number
#include <stdio.h>
int factorial(int n)
{
    int ans;
    if(n==1)
    return 1;
    else
    ans=n*factorial(n-1);
    return ans;
}
int main() {
    int n;
    printf("enter a number to find its factorial: ");
    scanf("%d",&n);
    printf("%d", factorial(n));
}
