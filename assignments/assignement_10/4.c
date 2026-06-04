#include<stdio.h>
double Fhtocs(float fTemp){
    double dCtemp=0.0;
    dCtemp=(fTemp-32)*5/9;
    return dCtemp;
}
int main(){
    float fValue=0.0;
    double dRet=0.0;
    printf("Enter temperature in fahrenheit:");
    scanf("%f",&fValue);
    dRet=Fhtocs(fValue);
    printf("Temperature in celsius: %lf",dRet);
    return 0;
}