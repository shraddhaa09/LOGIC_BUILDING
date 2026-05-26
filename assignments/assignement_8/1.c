//time complexity O(1)
#include<stdio.h>
double CircleArea(float fRadius){
    return 3.14*fRadius*fRadius;
}
int main(){
    float fvalue=0.0;
    double dRet=0.0;
    printf("Enter the radius");
    scanf("%f", &fvalue);
    dRet = CircleArea(fvalue);
    printf("The area of the circle is: %lf", dRet);
    return 0;
}