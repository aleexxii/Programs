#include<Stdio.h>
    int main () {

        int i,j,n;
            n=5;
            char alphabet='a';
            int count=0;
            for ( i = 1; i <= n; i++)
                {
                    for ( j = 1; j <= i; j++)
                        {
                            count++;
                            if (count % 2 == 0)
                                {
                                printf("%c",alphabet-32);
                                }
                            else 
                                {
                                printf("%c",alphabet);
                                }
                                alphabet++;
                        }
                        printf("\n");
                }
    }