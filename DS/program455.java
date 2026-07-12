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
        this.first=null;
        this.iCount=0;
    }
    public void display(){
        node temp=first;
        while(temp!=null){
            System.out.print("| "+temp.data+" | -> ");
            temp=temp.next;
        }
        System.out.println("null");
    }
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
            node temp=first;
            while(temp.next!=null){
                temp=temp.next;
            }
        temp.next=newn;
        }
        iCount++;
    }
    public void InsertatPos(int ino,int iPos){}
    public void DeleteFirst(){}    
    public void DeleteLast(int ino){}
    public void DeleteatPos(int ino,int iPos){}

}
class program455{
    public static void main(String A[]){
        SinglyLL sobj=new SinglyLL();
        int iRet=0;
        sobj.InsertFirst(51);
        sobj.InsertFirst(21);
        sobj.InsertFirst(11);

        sobj.InsertFirst(101);
        sobj.InsertFirst(111);
        sobj.InsertFirst(121);

        sobj.display();
        iRet=sobj.count();
        System.out.println("Number of the elements are :"+iRet);

    }
}