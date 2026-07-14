#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

int Count(PNODE head){
    int iCount=0;
    while (head!=NULL)
    {
        iCount++;
        head=head->next;
    }
    
    return iCount;
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d | -> ", Head->data);
        Head = Head->next;
    }

    printf("NULL\n");
}

void insertatfirst(PPNODE head,int iNo){
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    if(*head==NULL){
        *head=newn;
    }
    else{
        newn->next=*head;
        *head=newn;
    }
}
void insertatlast(PPNODE head,int iNo){
    PNODE newn=NULL;
    PNODE temp=*head;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    if(*head==NULL){
        insertatfirst(head,iNo);
    }
    else{
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newn;
    }
}

void insertatpos(PPNODE head,int iNo,int iPos){
    PNODE newn=NULL;
    PNODE temp=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=iNo;
    newn->next=NULL;
    int size=0;
    int i=0;
    size=Count(*head);
    if((iPos<1)||(iPos>size+1)){
        printf("invalid position");
        return;
    }
    if(iPos==1){
        insertatfirst(head,iNo);
    }
    else if(iPos==size+1){
        insertatlast(head,iNo);
    }
    else{
        temp=*head;
        for(i=1;i<iPos-1;i++){
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;
    }
}
void deleteatfirst(PPNODE head){
    PNODE temp=NULL;
    if(*head==NULL){
        return;
    }
    else{
        temp=*head;
        *head=temp->next;
        free(temp);
    }
}
void deleteatlast(PPNODE head){
    PNODE temp=NULL;
    if(*head==NULL){
        return;
    }
    else if((*head)->next==NULL){
        free(*head);
        *head=NULL;
    }
    else{
        temp=*head;
       while(temp->next->next!=NULL){
            temp=temp->next;
       }
       free(temp->next);
       temp->next=NULL;
    }
}

void deleteatpos(PPNODE head,int Pos){
    int size=0;
    PNODE temp=NULL;
    PNODE target=NULL;
    int i=0;

    size=Count(*head);
    

    if(*head==NULL){
        return;
    }
    if((Pos<1)||(Pos>size+1)){
        printf("invalid position");
        return;
    }
    if(Pos==1){
        deleteatfirst(head);
    }
    else if(Pos==size){
        deleteatlast(head);
    }
    else{
        temp=*head;
        for(i=1;i<Pos-1;i++){
            temp=temp->next;
        }
        target=temp->next;
        temp->next=target->next;
        free(target);

    }
}
int counteven(PNODE head){
    int ecount=0;
    while(head!=NULL){
        if((head->data)%2==0){
            ecount++;
        }
        head=head->next;
    }
    return ecount;
}


int main()
{
    PNODE First = NULL;
    int choice = 1;
    int value = 0;
    int pos = 0;

    while(choice != 0)
    {
        printf("\n******** Linked List ********\n");
        printf("1. Insert First\n");
        printf("2. Insert Last\n");
        printf("3. Delete First\n");
        printf("4. Delete Last\n");
        printf("5. Insert At Position\n");
        printf("6. Delete At Position\n");
        printf("7. Display\n");
        printf("8. Count\n");
        printf("9.Even count\n");
        printf("0. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter value : ");
                scanf("%d",&value);
                insertatfirst(&First,value);
                break;

            case 2:
                printf("Enter value : ");
                scanf("%d",&value);
                insertatlast(&First,value);
                break;

            case 3:
                deleteatfirst(&First);
                break;

            case 4:
                deleteatlast(&First);
                break;

            case 5:
                printf("Enter value : ");
                scanf("%d",&value);

                printf("Enter position : ");
                scanf("%d",&pos);

                insertatpos(&First,value,pos);
                break;

            case 6:
                printf("Enter position : ");
                scanf("%d",&pos);

                deleteatpos(&First,pos);
                break;

            case 7:
                Display(First);
                break;

            case 8:
                printf("Count = %d\n",Count(First));
                break;
            
            case 9:
                printf("count of even number is : %d",counteven(First));
                break;

            case 0:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    }

    return 0;
}