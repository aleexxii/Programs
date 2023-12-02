/*
#include<stdio.h>
int main () {
    int limit,i,numbers[1000],sum=0;
        printf ("enter the limt :");
            scanf("%d",&limit);

        printf("Enter your numbers \n");
            for (i = 1; i <= limit; i++)
            {
                scanf ("%d",&numbers[i]);
            }
            for (i = 1; i <= limit; i++)
                {
                    sum=sum+numbers[i];
                }
        printf("total value of you enterd : %d",sum);
        
}
*/

#include<stdio.h>
    int main () {
        int limit,i,numbers[10000];

            printf("Enter a limit : ");
                scanf("%d",&limit);

            printf("Enter your numbers \n");
                        //enter your numbers to limit
                for (i = 1; i <= limit; i++)
                    {
                        scanf("%d",&numbers[i]);
                    }
                
                printf("Enterd values are");
                for (i = 1; i <= limit; i++)
                {
                    printf("\n %d",numbers[i]);
                }   
        return 0;
    }