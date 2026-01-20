#include<stdio.h>
int main(){
    int num,sum,pv,nv=1;
    printf("Enter a number you want to Fibonacci series: ");
    scanf("%d",&num);
    for (pv = 0; nv <=num;){
        printf(" %d ",nv);
        sum=nv+pv;
        pv=nv;
        nv=sum;
    }
    
}