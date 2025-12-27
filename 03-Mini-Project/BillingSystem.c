#include<stdio.h>
int main(){
    int prod_price,disc,new_price,cust_type,tax,afttax;
    // Taking Product price and Customer's Category
    printf("Enter product Price: ");  
    scanf("%d",&prod_price);      
    printf("Enter Member type(!. Normal  2.Member  3.VIP)");
    scanf("%d",&cust_type);
    //Apply Discount on basis of Memmber Type
    if (cust_type==1){
        disc= 0;
    }else if(cust_type==2){
        disc= ((prod_price*10)/100);
    }else if(cust_type==3){
        disc=((prod_price*20)/100);
    }else{
        printf("You have enter invalid number! ");
        return 1;
    }
    new_price=prod_price-disc;
    //Apply Extra Discount if price is greater than 5000
    if(new_price>=5000){
        new_price=new_price+((new_price*5)/100);
    }
    new_price >=10000?(tax=((new_price*15)/100)):(tax=((new_price*8)/100));
    afttax=new_price+tax; 
    // Final Receipt
    printf("     ****RECEIPT****\n"); 
    printf("Discount : %d\n",disc);
    printf("Price after Discount : %d\n",new_price);
    printf("Tax : %d\n",tax);
    printf("Total Bill is : %d\n",afttax); 
    return 0;   
}