#include<stdio.h>
double Squaremeter(int iValue){
    return iValue * 0.0929;
}
int main(){
    int iValue = 0;
    double dRet = 0.0;
    printf("Enter the area in square feet \n");
    scanf("%d", &iValue);
    dRet = Squaremeter(iValue);
    printf("Area in square meter is %lf",dRet);
    return 0;
}