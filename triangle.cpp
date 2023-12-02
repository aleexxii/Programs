#include <stdio.h>

int main() {
int row,col,space,num;
printf("Enter a number : ");
    scanf("%d",&num);
        for (row = 0; row < num; row++)
            {
                for (space = 0; space < num-row; space++)
                    {
                        printf(" ");
                    }
                for (col = 0; col <= row; col++)
                    {
                        printf("* ");
                    }
                printf("\n");
            }
    return 0;
}