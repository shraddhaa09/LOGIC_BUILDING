#include<stdio.h>

int RangeDisplayeven(int iStart, int iEnd) {
    int i = 0;
    int sum=0;
    if(iStart<0 || iEnd<0){
        return -1;
    }
    for (i = iStart; i <= iEnd; i++) {
        if (i % 2 == 0) {
            sum=sum+i;
        }
    }
    return sum;
}

int main() {
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point:");
    scanf("%d",&iValue1);
    printf("Enter ending point:");
    scanf("%d",&iValue2);
    int iRet=0;
    iRet=RangeDisplayeven(iValue1,iValue2);
    if(iRet==-1){
        printf("Invalid range");
    }
    else{
        printf("%d",iRet);
    }
    return 0;
}