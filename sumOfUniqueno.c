#include <stdio.h>

int main() {
    int size,i,j,arr[100],sum=0,count;
        printf("enter array size :");
            scanf("%d",&size);
        printf("\nenter array elements :");
            for (i=0; i < size;i++)
                {
                    scanf("%d",&arr[i]);
                }
            for (i = 0; i < size ; i++)
                
            {
                count=0;
                for (j = 0; j < size; j++ )
                    {
                        if (i!=j)
                        {
                            if (arr[i]==arr[j])
                                {
                                    count++;
                                }
                        }
                    }
                    if (count==0)
                    {
                        sum=sum+arr[i];
                    }
            }
            printf("sum of unique numberc :%d",sum);

    return 0;
}