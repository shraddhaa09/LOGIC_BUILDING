#include<stdio.h>
void DisplaySchedule(char ch){
    if((ch=='A'|| ch=='a')){
        printf("Your exam at 7:00 AM");
    }
    else if((ch=='B'|| ch=='b')){
        printf("Your exam at 8:30 AM");
    }
    else if((ch=='c'||ch=='C')){
        printf("Your exam is 9:20");
    }
    else if((ch=='d'||ch=='D')){
        printf("Your exam is 10:30");
    }

}
int main(){
    char cValue='\0';
    printf("Enter the character");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);
    
    return 0;
}