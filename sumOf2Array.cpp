#include<stdio.h>
int main () {
    int size_of_array;
    printf("Enter your size of array : ");
        scanf("%d",&size_of_array);
    int arr1[size_of_array],arr2[size_of_array],sum_of_array[5],i;

    printf("Enter your values \n");
        for ( i = 0; i < size_of_array; i++)
            scanf("%d",&arr1[i]);
        for ( i = 0; i < size_of_array; i++)
            scanf("%d",&arr2[i]);
        for ( i = 0; i < size_of_array; i++)
            sum_of_array[i]=arr1[i]+arr2[i];
        printf("total of you enterd values \n ");
        for (i = 0; i < size_of_array; i++)
            printf("%d\t",sum_of_array[i]);
        
    return 0;
}