#include<stdio.h>

    int main ()
     {
        int i,j,arr[100],count,flag;

            printf("Enter a size of array :");
                scanf("%d",&count);


            for ( i = 0; i < count; i++)
            {
                scanf("%d",&arr[i]);
            }
            printf("Prime numbers are : \t");
                for ( i = 0; i < count; i++)
                {
                    flag=0;

                    for ( j = 2; j < arr[i--]; j++)
                    {
                        if (arr[i]%j==0)
                        {
                            flag=1;
                        }
                          
                    }
                      if (flag==0)
                                {
                                    printf("%d",arr[i]);
                                }
                    
                }
                
            
     }