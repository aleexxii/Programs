#include<stdio.h>
int main () {
    int i,num,j;
    printf("enter a digit : ");
    scanf("%d",&num);
        for (i = -num; i <= num; i++)
            {
                for ( j = 0; j < num+1; j++)
                {
                    if (i==-num||i==num||-i==j||i==j||j==0)
                        {
                            printf("* ");
                        }
                    else
                        printf("  ");
                }
                printf("\n");
            }
            
            
    return 0;
}