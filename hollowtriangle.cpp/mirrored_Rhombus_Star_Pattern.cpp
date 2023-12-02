#include<stdio.h>
    int main (){
        int row,space,col,num;
            printf("Enter  a number : ");
            scanf("%d",&num);
                for (row = 1; row <= num; row++)
                    {
                        for (space = 1; space <= row; space++)
                            {
                                printf("  ");
                            }
                        for (col = 1; col <= num; col++)
                            {
                                if (row==1 || row==num || col==1 || col==num)
                                    printf("* ");
                                else
                                    printf("  ");
                            }
                        printf("\n");
                    }
        return 0;
    }