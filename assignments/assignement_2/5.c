// Accept number from user and check whether number is even or odd.
#include <stdio.h>
//macro->it is used to define constant values that can be used throughout the program. because of this we can use TRUE and FALSE instead of 1 and 0 to represent boolean values.
#define TRUE 1
#define FALSE 0
//typedef->it is used to create new data type name for existing data type. because of this we can use BOOL instead of int to represent boolean values.
//return type of CheckEvenOdd is actually int but we are using typedef to create a new data type name BOOL for int to represent boolean values. so it is more readable and understandable.
typedef int BOOL;
// CheckEvenOdd->it is used to check whether the number is even or odd.
// so return type is BOOL because it will return TRUE if number is even and FALSE if number is odd.
BOOL CheckEvenOdd(int iNo){
    if((iNo%2)==0){
        return TRUE;
    }
    else{
        return FALSE;
    }
}