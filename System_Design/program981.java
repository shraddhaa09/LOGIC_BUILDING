//singleton design pattern 
class ParkingLot{
    private static ParkingLot instance;//This variable belongs to the class, not to individual objects.
    
    private ParkingLot(){//constructor is private
        System.out.println("Parking object gets created ");
    }

    public static ParkingLot getInstance(){//return object as return value,
                                            //static because we need to call it without already having a ParkingLot object.
        if(instance==null){
            instance=new ParkingLot();
        }
        return instance;
    }
}

class program981{
    
    public static void main(String A[]){

       ParkingLot pobj1=ParkingLot.getInstance();
       ParkingLot pobj2=ParkingLot.getInstance();
       ParkingLot pobj3=ParkingLot.getInstance();

    }
}