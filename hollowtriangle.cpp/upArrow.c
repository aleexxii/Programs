#include<stdio.h>

int main() 
{
    int dig,row,col;
    printf("Enter a odd number :");
    scanf("%d",&dig);
        for ( row = 0; row <= dig; row++)
            {
                for ( col = -dig; col <= dig; col++)
                {
                    if (-row < col && col < row)
                        
                            printf("  ");
                        
                    else
                        
                            printf("* ");
                }  
                printf("\n");
            }
            
}