#include<stdio.h>
    int main () {
        int choose,deposit,repeat,withdraw,balance,statement,mini[10],i=0;
        int Account_Balance=5000;
        for (;;){
        printf(" 1 CASH DEPOSIT \t 3 MINI STATEMENT \n 2 CASH WITHDRAW \t 4 ACCOUNT BALANCE \n ENTER A VALID INPUT : ");
            scanf("%d",&choose);
            switch (choose)
            {
            case 1:
                printf("Enter your deposit amount : ");
                    scanf("%d",&deposit);
                    Account_Balance=Account_Balance+deposit;
                    mini[i]=deposit;
                    i++;
                break;
            case 2:
                printf("Please enter your withdraw amount : ");
                    scanf("%d",&withdraw);
                    Account_Balance=Account_Balance-withdraw;
                    mini[i]=(withdraw*-1);
                    i++;
                break;
            case 3:
                for (i=0; i<10;i++)
                printf("%d\n",mini[i]);
                break;
            case 4:
                printf("ACCOUNT BALANCE :%d",Account_Balance);
                break;
            default:
                break;
            }
            printf("\nDo you want to continue \n 1 YES \n 2 NO \n");
            scanf("%d",&repeat);
            if (repeat==2){
            break;
            }
        }
        return 0;
    }