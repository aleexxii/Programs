#include <stdio.h>

int main()
{
    int limit=6,i,j,s;
        for (i =1; i<=limit; i++) 
        {
            for (s = 1; s <= limit-i; s++)
            {
                printf("1 ");
            }
            for ( j =1; j <= i; j++)
                {
                    printf("%d ",i);
                }
                printf("\n");
            
        }
    
}