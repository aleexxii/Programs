#include<stdio.h>
    int main () {
        int row_size,col_size;
            printf("enter row size : ");
                scanf("%d",&row_size);
            printf("enter column size : ");
                scanf("%d",&col_size);
        int values,row,col,array[row_size][col_size];
            printf("enter values\n");
                scanf("%d",&values);
                for (row = 1; row <= row_size; row++)
                    {
                        for (col = 1; col <= col_size; col++)
                            {
                                scanf("%d\t",&array[row][col]);
                            }
                    }
            printf("Your values are \n");
                for (row = 1; row <= row_size; row++)
                    {
                        for (col = 1; col <= col_size; col++)
                            {
                                printf("%d\t",array[row][col]);
                            }
                        printf("\n");
                    }
        return 0;
    }