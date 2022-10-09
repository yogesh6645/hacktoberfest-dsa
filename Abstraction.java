public class Abstraction {
    public static void main(String[] args) {
    // now u can make object of a child class i.e audi and bmw
        Audi a1 = new Audi();
        a1.start();
        BMW b1 = new BMW();
        b1.start();
    }
}
class Audi extends Car{

    @Override
    void start() {
        System.out.println("Audi is starting");
    }
}
class BMW extends Car{

    @Override
    void start() {
        System.out.println("BMW is starting");
    }
}
// after using absstract keyword u cant make objects of class and its just a concept
abstract class Car{
//    String brand;
    int price;
    abstract void start();
}