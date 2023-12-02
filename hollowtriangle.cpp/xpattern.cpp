#include<stdio.h>
    int main (){
        int num,row,col;
            printf("enter a odd number : ");
            scanf("%d",&num);
                if (num%2==0)
                    printf("ENTERD NUMBER IS EVEN...");
            for (row = 1; row <= num; row++)
                {
                    for (col = 1; col <= num; col++)
                        if (col==row||col==num-row+1)
                            {
                                printf("* ");
                            }
                        else
                            {
                                printf("  ");
                            }
                    printf("\n");
                }
        return 0;
    }