#include<stdio.h>
    int main () 
    {
        int i,num,result,limit;
            printf("Enter a digit : ");
            scanf("%d",&num);
            printf("Enter the limit : ");
            scanf("%d",&limit);
                for (i = 1; i <= limit; i++)
                    {
                        scanf("%d",&i);
                    }
                    for (i = 1; i <= limit; i++)
                    {
                        result=num*i;
                    printf("%d x %d = %d\n",i,num,result);
                    
                    }
        return 0;
    }