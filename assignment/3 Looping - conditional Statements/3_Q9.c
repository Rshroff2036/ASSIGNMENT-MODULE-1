//Write a program make a summation of given number (E.g., 1523 Ans:11)
#include<stdio.h>  
 int main()    
{    
    int n,sum=0,m;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>0)    
{    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
}    
    printf("Sum is=%d",sum);    
    return 0;  
}   
