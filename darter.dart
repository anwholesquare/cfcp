class Uber {
    static int driverNo = 0;
    Uber (String id) {
        driverNo++;
    }
}
mixin Requester {
    void checkRider() {
        print("requesting");
    }
}
class Driver extends Uber with Requester {

    int? driverID;
    int reqID (int id) {
        return id;
    }
    Driver (int driverID) : super(driverID.toString() + "_" + "Anan") {
        this.driverID = driverID;
        checkRider();
    }
    

}

void main () {
  
    var d = Driver(2);
    var e = Driver (3);
    print (Uber.driverNo);


}