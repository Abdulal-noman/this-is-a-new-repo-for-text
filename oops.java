public class oops {

    // create a class
    public static class student{
        String name;
        int roll;
        double persent;
    }

    public static void main(String[] args) {
       student x = new student();
       x.name="abudl al nooman";
       x.roll=63;
       x.persent=33.33;
       
       
       System.err.println(x.name);
       System.out.println(x.roll);
       System.out.println(x.persent);

    }
}