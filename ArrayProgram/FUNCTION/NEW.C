#include<stdio.h>

void pattern (int);

 void Square(int);

int main(){

    int size;
        printf("Enter the limit : ");
            scanf("%d",&size);
  //    pattern (size);
  Square(size);
}

/* void pattern (int limit) {
    int i,j;

    for ( i = 0; i < limit; i++)
    {
        if (i % 2 == 0 )

        for (j = 1; j <= limit-i; j++) 
        {
            {
                printf("A ");
            }
            
        }
        else 
            printf("\n* \n*\n");
            

    }
        
} */
