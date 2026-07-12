#include<iostream>
using namespace std;
#pragma pack(1)//applicable only for first delcaration not for the complete code

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL {
    private:
    PNODE first;
    PNODE last;
    int iCount;
};
int main(){
    DoublyCL dobj;
    cout<<sizeof(dobj)<<"\n";
    return 0;
}