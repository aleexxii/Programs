/*
#include<stdio.h>
    int main () {
        int num,row,space,col;
            printf("Enter a number : ");
            scanf ("%d",&num);
                for (row = 1; row <= num; row++)
                    {
                        for (col = 1; col <= row*2-1; col++)
                            {
                                if ((num+1==row+col)||(num==row)||(col==num+row-1))
                                    printf("* ");
                                else
                                    printf("x ");
                            }
                       printf("\n");
                    }
        return 0;
    }
    */

   #include<stdio.h>
int main() {
    int row,col,length;
        printf("Enter a number :"); //user input
        scanf("%d",&length);        //save the user input int length variable

                
            for (row = 1; row <= length; row++)
                {
                    for (col = 1; col <= length*2-1; col++)
                        {
                            if (length==row||length+1==row+col||col==length+row-1)
                                    printf("* ");
                            else
                                printf("  ");
                        }
                    printf("\n");
                }
}