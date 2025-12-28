#include<stdio.h>
int main(){
    int pin, op_wit, balance;
    printf("************************************************\n");
    printf("**************Welcome To ATM System*************\n");
    printf("************************************************\n");
    // Loop for Invalid Password
    for(int i=1;i<=3;i++){     
    printf("\nENter your PIN: ");
    scanf("%d",&pin);
    if (pin==93527){
        printf("------PIN is correct-------\n"); 
        //Show Menu
        printf("1--> Withdrawal\n");
        printf("2-->user_balance Check \n");
        printf("3--> Transiction History\n");    
        printf("4--> Exit\n");
        printf("Select Option: ");
        scanf("%d",&op_wit);    
        // Check Options chossen by user  
        switch(op_wit){
            case 1:
              printf("Enter your Amount: ");
              scanf("%d",&balance);
              if (balance<=932450)
              {
                printf("Wait.....\n");
                printf("----Please Collect your cash----");
               
              }else if(balance>932450){
                printf("Your balance is less than amount..");
                return 0;
              }else{
                printf("You have invalid amount");return 0;
              }
              break;
              case 2:
              printf("----ACCOUNT INFO----");
              printf("\nYour balance is 932450!");
              break;
              case 3:
              printf("----TRANCACTION HISTORY----\n");
              printf("Withdrawl : 75940\n  Date/Time: 12-12-2023 9:10AM\n");
              printf("Transiction : 293440\n  Date/Time: 10-23-2023 5:44PM\n");
              printf("Transictio : 30000\n  Date/Time: 10-12-2023 12:10AM\n");
              printf("Withdrawl : 45000\n  Date/Time: 12-12-2023 10:40PM\n");
              printf("Withdrawl : 122000\n  Date/Time: 12-12-2023 9:10AM\n");
              break;
              case 4:
              printf("Exiting_ _ _ _ _ _ _ _");
              break;
        }   
             printf("\n------Thanks for using ATM!-----");
             return 0;
    }
        if(i==3){
            printf("Your Account have been blocked.....\n");
            printf("Contact with Main Branch!");
            break;}
   else{
        printf("Your PIN is INVALID");
      } 
    
    }
    
}
