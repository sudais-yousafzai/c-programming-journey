#include<stdio.h>
int main(){
    // It will print prime number under your given range 
    int range;
    //Range take from user
    printf("ENter a number: ");
    scanf("%d",&range);
    printf("-------Prime Number-------\n",range);
    
    for(int i=2;i<=range;i++){
        int flag=0;  
        for(int j=2 ; j<i ; j++){
            if(i%j==0){
                flag=1;    
                break;
            }

        }if (flag==0)
        {
            printf(" %d \n",i);  
        }
        
    }
}