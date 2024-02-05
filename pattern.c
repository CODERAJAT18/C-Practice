#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) 
    {
        int x =i;
        int step = n-1;
        for(int j = 1;j<=i;j++)
        {
            printf("%d ",x);
            x= x+step;
            step--;
        }
        printf("\n");
    }
    
    return 0;
}