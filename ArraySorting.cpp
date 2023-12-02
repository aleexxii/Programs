#include<stdio.h>
    int main () {
        int limit,i,num[1000],j,temp=0;
        //total count of numbers
            printf("Enter a limt : ");
                scanf("%d",&limit);
        //input numbers
            printf("Enter your numbers\n");
                for (i = 0; i < limit; i++)
                    {
                       scanf("%d",&num[i]); 
                    }
            for (i = 0; i < limit-1; i++)
                {
                    for (j = i+1; j < limit; j++)
                        {
                            if (num[i] > num[j])
                                {
                                    temp=num[i];
                                    num[i]=num[j];
                                    num[j]=temp;
                                }
                        }
                }
                    //output values
                    printf("Sorted values are ");
                for (i = 0; i < limit; i++)
                    {
                        printf("%d\t",num[i]);
                    }
        return 0;
    }