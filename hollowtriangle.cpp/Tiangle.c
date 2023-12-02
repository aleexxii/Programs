#include<stdio.h>
    int main (){
        int i,j,s,sp,k;
        int n=5;

        for (i = 1; i <= n; i++)
            {
                for (s = 1; s <= n-i; s++)
                    {
                        printf(" ");
                    }
                for (j = 1; j <= i; j++)
                    {
                        printf("* ");
                    }
                for (sp = 1; sp <= n-i; sp++)
                    {
                        printf("  ");
                    }
                for ( k = 1; k <= i; k++)
                    {
                        printf("* ");
                    }
                    printf("\n");
            }
    }