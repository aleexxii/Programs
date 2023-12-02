#include<stdio.h>
    int main () 
    {
        int size,i,even[6];
            printf("Enter the size of array : ");
                scanf("%d",&size);
        int array[size];
            printf("enter %d numbers\n",size);
                for (i = 0; i < size; i++)
                    {
                        scanf("%d",&array[i]);
                    }
        printf("Is the all even numbers in the array \n");
            for ( i = 0; i < size; i++)
            {
                if (array[i]%2==0)
                printf("%d\t",array[i]);
            }
        printf("\nis the odd numbers in you enterd\n");
            for (i = 0; i < size; i++)
                {
                    if (array[i]%2==1)
                    printf("%d\t",array[i]);
                }
            
        return 0;
    }