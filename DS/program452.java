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
    public void Insertlast(int ino){}
    public void InsertatPos(int ino,int iPos){}
    public void DeleteFirst(){}    
    public void DeleteLast(int ino){}
    public void DeleteatPos(int ino,int iPos){}

}
class program452{
    public static void main(String A[]){
        SinglyLL sobj=new SinglyLL();

        
    }
}