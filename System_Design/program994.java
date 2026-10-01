//canonical(v.v.v.v.impmp)

class Demo
{
    public int i,j;
    public Demo setI(int no){
        this.i=no;
        return this;
    }

    public Demo setJ(int no){
        this.j=no;
        return this;
    }

    public void display(){
        System.out.println("i: "+i);
        System.out.println("j: "+j);
    }
}
interface ParkingObserver{
    void update(int availableSpots);

}

class DisplayBoard implements ParkingObserver{
    public void update(int availableSpots){
        System.out.println("Display Board : "+availableSpots);
    }
}

class MobileApplication implements ParkingObserver{
    public void update(int availableSpots){
        System.out.println("Display Board : "+availableSpots);
    }
}

class ParkingFloor{
    private int availableSpots;
    public ParkingFloor(int availableSpots){
        this.availableSpots=availableSpots;
    }
}

class program994
{
    public static void main(String A[]){

        ParkingFloor floor=new ParkingFloor(5);
        
    }
}