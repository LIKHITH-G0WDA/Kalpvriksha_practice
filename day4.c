//sum of diagonal elements
#include <stdio.h>
int main() {
    int m,a[100][100],sum=0;
    printf("enter the size: ");
    scanf("%d",&m);
    printf("enter the matrix: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of diagonal elements is %d",sum);
    
}
