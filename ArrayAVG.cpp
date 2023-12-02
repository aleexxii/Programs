#include<stdio.h>
    int main () {
        int limit,i,arr[1000],sum=0,avg;
            printf("Entetr Limit : ");
                scanf("%d",&limit);
            printf("Enter Numbers \n");
                for (i = 0; i < limit; i++)
                    {
                        scanf("%d",&arr[i]);
                        sum=sum+arr[i];
                    }   
           printf("TOTAL = %d",sum);   
           avg=sum/limit;
           printf("\nAVARAGE = %d",avg);                 

    }