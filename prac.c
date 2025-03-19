#include<stdio.h>

int main(){
    
    int pin;
    int menu;
    float myBalance;
    //ask the user for their PIN number
    printf("Enter your PIN number: ");
    scanf("%d", &pin);
    
    //identify PIN number
    //display choices if PIN is valid
    //display user balance
    if(pin == 12345) 
    {
        printf("\n1. My Balance\n2. My Savings\n3. Exit\n");
        printf("\nSelect Choice: ");
        scanf("%d", &menu);
        
        //display user balance
        //ask user to select choice
        if(menu == 1)
        {
            printf("\nMy Balance\n");
            printf("9.999.999\n");
            printf("\n1. Withraw\n2. Eject Card\n");
            printf("\nSelect Choice: ");
            scanf("%f", &myBalance);
            if(myBalance == 1)
            {
                printf("\nPHP 2 will be charge\n");
                printf("\n1. Continue\n2. Back\n");
            }
        }
        else if(menu == 2)
        {
            printf("\nMy Savings\n");
        }
        else if(menu == 3)
        {
            printf("Exiting...");
        }
    }else printf("\nInvalid PIN number");
    
    
    
    return 0;
}
