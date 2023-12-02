#include<stdio.h>
int main (){

    int size,smallest,i;

        printf("Enter the size of array : ");
            scanf("%d",&size);
            int array[size];

        printf("Enter %d elements of the array: \n", size);
            for (i = 0; i < size; i++)
                {
                    scanf("%d",&array[i]);
                }
            smallest=array[0];
            
            for ( i = 1; i < size; i++)
                {
                    if (smallest > array[i])
                    smallest=array[i];
                }
        printf("smallest element present in the  given array is : %d",smallest);
    return 0;
}