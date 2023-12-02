#include<stdio.h>
    int main () {
        int limit,num[1000],i,greater;
            printf("Enter a limit : ");
            scanf("%d",&limit);
        printf("Enter your numbers : \n");
            for (i = 0; i < limit; i++)
                {
                    scanf("%d",&num[i]);
                }
                greater=num[0];
                for (i = 0; i < limit; i++)
                    {
                      if (greater<num[i])
                        greater=num[i];
                    }
                    printf("%d is greater in you enterd numbers",greater);
        return 0;
    }