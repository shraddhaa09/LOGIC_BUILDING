//4. Accept one number and check whether is is divisible by 5 or not.
#include <stdio.h>
typedef int BOOL;//user defined data type->it will replace int with BOOL(typedef is used to create user defined data type eg: BOOL is user defined data type and int is the actual data type like if there is a change in the actual data type then we have to change only in the typedef and not in the entire code)
#define TRUE 1//preprocessor directive(macro)->it will replace TRUE with 1 before compilation and it is used to define constant values
#define FALSE 0
int Check(int iNo){
    if(iNo%5==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int main(){
    int ivalue=0;
    BOOL bret=FALSE;
    printf("enter number\n");
    scanf("%d",&ivalue);
    bret=Check(ivalue);
    if(bret==TRUE){
        printf("divisible by 5\n");
    }
    else{
        printf("not divisible by 5\n");
    }
    return 0;
}