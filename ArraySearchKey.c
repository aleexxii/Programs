#include<stdio.h>
int main (){
    int limit,i,num[1000],SearchKey,flag=0;

        printf("ENTER A LIMIT : ");
            scanf("%d",&limit);
        
        printf("Please enter your values \n");
            for (i = 0; i < limit; i++)
                {
                    scanf("%d",&num[i]);
                }
            printf("SEARCH \n");
                scanf("%d",&SearchKey);
                for (i = 0; i < limit; i++)
                    {
                        if (SearchKey==num[i])
                         {
                            flag=1;
                            break;
                         }
                           
                    }
                            if (flag==1)
                                {
                                    printf("Value founded at position %d",i+1);
                                        //i+1 for Array started from 0 th position 
                                }
                            else
                                {
                                    printf("value not founded");
                                }
    return 0;
}