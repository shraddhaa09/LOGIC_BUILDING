#include<stdio.h>
double rectangleArea(float fLength, float fBreadth){
    return fLength*fBreadth;
}
int main(){
    float fLength=0.0,fBreadth=0.0;
    double dRet=0.0;
    printf("Enter the length and breadth");
    scanf("%f%f", &fLength, &fBreadth);
    dRet = rectangleArea(fLength,fBreadth);
    printf("The area of the rectangle is: %lf", dRet);
    return 0;
}