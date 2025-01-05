//transpose of a matrix
#include <stdio.h>
int main() {
    int m[10][10],t[10][10],r,c;
    printf("enter no. of rows and columns: ");
    scanf("%d%d", &r,&c);
    
    printf("enter matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          scanf("%d", &m[i][j]);  
        }
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            t[j][i]=m[i][j];
        }
    }
    
    printf("transpose matrix\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
          printf("%d", t[i][j]);  
        }
        printf("\n");
    }
}
