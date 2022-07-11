#include <stdio.h>

int main()
{
    float x,y;
    char ch;
    printf("Enter initial amount\n");
    scanf("%f", &x);
    printf("Enter \nc for credit\nd for debit\nd for balance\n");
    scanf("\n%c", &ch);

    switch(ch)
    {
        case 'c':
        printf("Enter credit amount ");
        scanf("%f", &y);
        x=x+y;
        printf("New amount= %.2f", x);
        break;
        
        case 'd':
        printf("Enter debit amount ");
        scanf("%f", &y);
        if(x>=y)
        {
           x=x-y;
        printf("New amount= %.2f", x); 
        }
        else
        {
            printf("Insufficient amount in your account");
        }
        break;

        case 'b':
        printf("Amount in your account= %.2f", x);
        break;

        default:
        printf("CHoose correct ooption for operation");


    }
    return 0;
}