#include <stdio.h>

int main() 
{
    int n = 5;

    for (int i=1;i<=n;i++) 
    {   
        int x = 0;
        for (int j=1;j<=i;j++) 
        {
            if(j%2==0)
                {
                    printf("%d ",x+n-i+1);
                    //printf("i=%d j=%d k=%d x=%d ",i,j,k,x);
                }
                else
                {
                    printf("%d ",x+i-j+1);
                    //printf("i=%d j=%d k=%d x=%d ",i,j,k,x);
                }
            x=x+n-j+1;
        }
        printf("\n");
    }
    return 0;
}