#include<stdio.h>
int main(){
    int iNo1=0,iNo2=0,Ans=0;
    int iDigit=0;

    printf("Enter first number :\n");
    scanf("%d",&iNo1);

    printf("Enter second number :\n");
    scanf("%d",&iNo2);

    Ans=iNo1&iNo2;

    printf("ADD : %d\n",Ans);  
    
    Ans=iNo1|iNo2;

    printf("OR : %d\n",Ans);
    
    Ans=iNo1^iNo2;

    printf("XOR: %d\n",Ans); 
    return 0;
}