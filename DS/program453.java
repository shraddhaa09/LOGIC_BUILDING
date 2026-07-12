class node{
    public int data;
    public node next;

    node(int no){
        this.data=no;
        this.next=null;
    }
}
class SinglyLL{
    private node first;
    private int iCount;
    public SinglyLL(){
        System.out.println("inside the constructor\n");
        this.first=null;
        this.iCount=0;
    }
    public void display(){}
    public int count(){
        return iCount;
    }
    public void InsertFirst(int ino){
        node newn=new node(ino);
        if(first==null){
            first=newn;
        }
        else{
            newn.next=first;
            first=newn;
        }
        iCount++;
    }
    public void Insertlast(int ino){
        node newn=new node(ino);
        if(first==null){
            first=newn;
        }
        else{

        }
        iCount++;
    }
    public void InsertatPos(int ino,int iPos){}
    public void DeleteFirst(){}    
    public void DeleteLast(int ino){}
    public void DeleteatPos(int ino,int iPos){}

}
class program453{
    public static void main(String A[]){
        SinglyLL sobj=new SinglyLL();
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

    }
}